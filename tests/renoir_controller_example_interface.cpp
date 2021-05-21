//
// Copyright 2021,
// Olivier Stasse, CNRS
//
// CNRS
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

#include "renoir_controller_abstract_interface.hh"

// For Matlab
#include "walk.h"
#include "rtwtypes.h"
//#include "walk_data.cpp"


namespace renoir_controller {

struct Sensors {
  // Measured angle values at the motor side.
  std::vector<double> motor_angle_;
  // Measured angle at the joint side.
  std::vector<double> joint_angle_;
  // Measured or computed velocities.
  std::vector<double> velocities_;
  // Measured torques.
  std::vector<double> torques_;
  // Reconstructed orientation (from internal IMU).
  std::vector<double> orientation_;
  // Measured linear acceleration
  std::vector<double> accelerometer_;
  // Measured angular velocities
  std::vector<double> gyrometer_;
  // Measured 6D force sensors
  std::vector<double> force_sensors_;
  // Measured motor currents
  std::vector<double> motor_currents_;
  // Measured temperatures
  std::vector<double> temperatures_;

  std::size_t nbDofs_;
  std::size_t nbForceSensors_;
  std::size_t nbIMUs_;

  Sensors(std::size_t lNbDofs,
          std::size_t lNbForceSensors,
          std::size_t lNbIMUs)
  {
    nbDofs_ = lNbDofs;
    nbForceSensors_ = lNbForceSensors;
    nbIMUs_ = lNbIMUs;
    init();
  }


  void init()
  {
    motor_angle_.resize(nbDofs_);
    joint_angle_.resize(nbDofs_);
    velocities_.resize(nbDofs_);
    torques_.resize(nbDofs_);
    orientation_.resize(3*nbIMUs_);
    accelerometer_.resize(3*nbIMUs_);
    gyrometer_.resize(3*nbIMUs_);
    force_sensors_.resize(6*nbForceSensors_);
    motor_currents_.resize(nbDofs_);
    temperatures_.resize(nbDofs_);
  }

};


class LS2NExternalInterface: public AbstractExternalInterface {
public:

  Sensors renoirSensorValues_;
  std::vector<double> control_;

  walkModelClass LS2N_walk_;

  LS2NExternalInterface():
      renoirSensorValues_(32,4,1)
  {
    //renoirSensorValues_.init();
    control_.resize(renoirSensorValues_.motor_angle_.size());
  }

  virtual ~LS2NExternalInterface() {}

  void readSensorValues(std::map<std::string, SensorValues> &sensorsIn)
  {
    renoirSensorValues_.motor_angle_ = sensorsIn["motor-angles"].getValues();
    renoirSensorValues_.joint_angle_ = sensorsIn["joint-angles"].getValues();
    renoirSensorValues_.velocities_ = sensorsIn["velocities"].getValues();
    renoirSensorValues_.torques_ = sensorsIn["torques"].getValues();
    renoirSensorValues_.motor_currents_ = sensorsIn["currents"].getValues();
    renoirSensorValues_.temperatures_ = sensorsIn["temperatures"].getValues();
  }

  virtual void
  setupSetSensors(std::map<std::string, SensorValues> &sensorsIn)
  {
    readSensorValues(sensorsIn);
	std::cout << "setupSensor"<<std::endl;
   // For Matlab
   LS2N_walk_.initialize();
  }

  virtual void
  nominalSetSensors(std::map<std::string, SensorValues> &sensorsIn)
  {
    readSensorValues(sensorsIn);
  }


  virtual void
  cleanupSetSensors(std::map<std::string, SensorValues> &sensorsIn)
  {
    readSensorValues(sensorsIn);

   // For Matlab
   LS2N_walk_.initialize();
  }

  virtual void
  getControl(std::map<std::string, ControlValues> &controlOut)
  {
    double q[32], qp[32];
    double torque[32];

    for (size_t i=0; i<control_.size(); i++) q[i]= renoirSensorValues_.motor_angle_[i];
    for (size_t i=0; i<control_.size(); i++) qp[i]= renoirSensorValues_.velocities_[i];

    LS2N_walk_.step(q,qp,torque);

    for (size_t i=0; i<control_.size(); i++) control_[i]= torque[i];
    
    for (size_t i=0; i<control_.size(); i++) {
		std::cout<< "Torque " <<i<<" = "<< torque[i]<<std::endl;
	}
	std::cout << std::endl << std::endl<<std::endl;

    controlOut["control"].setValues(control_);
  }
};
} // namespace renoir_controller

extern "C" {
renoir_controller::AbstractExternalInterface * createExternalInterface()
{
  return new renoir_controller::LS2NExternalInterface();
}
}

extern "C" {
void destroyExternalInterface(renoir_controller::AbstractExternalInterface * anExtInt)
{

  renoir_controller::LS2NExternalInterface *
      aSimpleExtInt =
      dynamic_cast<renoir_controller::LS2NExternalInterface *>
      (anExtInt);

  if (aSimpleExtInt!=nullptr)
    delete aSimpleExtInt;
}
}
