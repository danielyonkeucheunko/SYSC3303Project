#include <thread>
#include "Floor.h"
#include "Elevator.h"
#include "Scheduler.h"


int main(void) {
    Scheduler scheduler;
    Elevator elevator(1, 22);
    Floor floor(1);

    std::thread floorThread(floor);
    std::thread elevatorThread(elevator);

    floorThread.join();
    elevatorThread.join();

    return 0;
}