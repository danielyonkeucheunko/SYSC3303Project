//
// Created by Daniel on 3/25/2025.
//

#include "Elevator.h"
#include <iostream>

void ElevatorLamp::turnOn() {
  std::cout << "Elevator Lamp " << floorNum << " On." << std::endl;
  isOn = true;
}

void ElevatorLamp::turnOff() {
  std::cout << "Elevator Lamp " << floorNum << " Off." << std::endl;
  isOn = false;
}

bool ElevatorLamp::getStatus() {
  return isOn;
}


void ElevatorButton::press() {
  std::cout << "Elevator Button " << floorNum << " has been pressed." << std::endl;
  isOn = true;
}

void ElevatorButton::reset() {
  isOn = false;
}

bool ElevatorButton::getStatus() {
  return isOn;
}


void Motor::forward() {
  std::cout << "Elevator motor moving up." << std::endl;
}

void Motor::backward() {
  std::cout << "Elevator motor moving down." << std::endl;
}
void Motor::stop() {
  std::cout << "Elevator motor stopped." << std::endl;
}



void Door::setState(DoorState newState) {
  state = newState;

  switch (newState) {
    case DoorState::OPEN:
      std::cout << "Doors open." << std::endl;
      break;
    case DoorState::CLOSED:
      std::cout << "Doors closed." << std::endl;
      break;
    default:
      std::cout << "Doors unknown." << std::endl;
      break;
  }
}

