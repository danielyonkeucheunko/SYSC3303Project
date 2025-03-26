//
// Created by Daniel on 3/25/2025.
//

#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include "DataTypes.h"

class ElevatorLamp {
private:
    int floorNum;
    bool isOn;

public:
    explicit ElevatorLamp(int num): floorNum(num), isOn(false) {}

    void turnOn();
    void turnOff();
    bool getStatus();
};

class ElevatorButton {
private:
    int floorNum;
    bool isOn;

public:
    explicit ElevatorButton(int num): floorNum(num), isOn(false) {}

    void press();
    void reset();
    bool getStatus();
};

class Motor{
public:
    void forward();
    void backward();
    void stop();
};

class Door {
private:
    DoorState state;

public:
    Door(): state(OPEN) {}

    void setState(DoorState newState);

};

class ElevatorSubsystem {
private:
    int id;
    int currentFloor;
    std::vector<ElevatorLamp> lamps;
    std::vector<ElevatorButton> buttons;
    Motor motor;
    Door door;

public:
    ElevatorSubsystem(int id, int numFloors): id(id), currentFloor(1) {
        for (auto i = 1; i <= numFloors; i++) {
            lamps.emplace_back(i);
            buttons.emplace_back(i);
        }
    }

    void run();
};
#endif //ELEVATOR_H
