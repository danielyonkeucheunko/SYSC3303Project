//
// Created by Daniel on 3/25/2025.
//

#include "Floor.h"
#include <iostream>

void FloorButton::pressed() {
    std::cout << "Floor " << toString(direction) << " button has been pressed." << std::endl;
    isOn = true;
}

void FloorButton::reset() {
  isOn = false;
}

bool FloorButton::getStatus() {
  return isOn;
}


void FloorLamp::turnOn() {
    std::cout << "Floor " << toString(direction) << " Lamp On." << std::endl;
    isOn = true;
}

void FloorLamp::turnOff() {
    std::cout << "Floor " << toString(direction) << " Lamp Off." << std::endl;
    isOn = false;
}

bool FloorLamp::getStatus() {
    return isOn;
}