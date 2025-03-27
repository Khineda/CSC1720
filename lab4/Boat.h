/********************************************************************** 

* File Name: Boat.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Boat.h

* Description: This is the header file containing the class for the Boat.cpp program

* Additional Files: Vehicle.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

//Header Guards
#ifndef BOAT_H
#define BOAT_H
#include <iostream>
#include "Vehicle.h"

using namespace std;
//setup Class

class Boat: virtual public Vehicle{

    private:
        bool floating;
    public:
        Boat(double mFuel);
        bool isFloating();
        void setFloating(bool fl);
        void showDash();
        void operate(double minutes, double speed);
        
};


#endif