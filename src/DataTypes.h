//
// Created by Daniel on 3/25/2025.
//

#ifndef DATATYPES_H
#define DATATYPES_H

#include <ctime>
#include <iostream>

enum Direction {UP, DOWN};
inline std::string toString(Direction dir) {
  switch (dir) {
    case Direction::UP:
      return "UP";
    case Direction::DOWN:
      return "DOWN";
    default:
      return "UNKNOWN";
  }
}

enum DoorState {OPEN, CLOSED};
inline std::string toString(DoorState state) {
  switch (state) {
    case DoorState::OPEN:
      return "OPEN";
    case DoorState::CLOSED:
      return "CLOSED";
    default:
      return "UNKNOWN";
  }
}

typedef struct {
  tm datetime;
  int currentFloor;
  Direction direction;
  int destinationFloor;
} FloorRequest;


typedef struct {

} ControlPacket;

#endif //DATATYPES_H
