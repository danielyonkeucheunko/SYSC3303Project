//
// Created by Daniel on 3/25/2025.
//

#ifndef FLOOR_H
#define FLOOR_H

#include <queue>
#include "DataTypes.h"

class FloorLamp;
class FloorButton;

class FloorButton {
private:
    Direction direction;
    bool isOn;

public:
    explicit FloorButton(Direction dir): direction(dir), isOn(false) {}

    void pressed();
    void reset();
    bool getStatus();
};

class FloorLamp {
private:
    Direction direction;
    bool isOn;

public:
    explicit FloorLamp(Direction dir): direction(dir), isOn(false) {}

    void turnOn();
    void turnOff();
    bool getStatus();
};


class Floor {
private:
    int floorNum;
    FloorButton upButton;
    FloorButton downButton;
    FloorLamp upLamp;
    FloorLamp downLamp;
    std::queue<FloorRequest> upQueue;
    std::queue<FloorRequest> downQueue;

public:
    explicit Floor(int floorNum) : floorNum(floorNum), upButton(UP), downButton(DOWN), upLamp(UP), downLamp(DOWN) {};
};
#endif //FLOOR_H
