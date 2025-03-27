/********************************************************************** 

* File Name: Plane.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Plane.h

* Description: This is the header file containing the class for the Plane.cpp program

* Additional Files: Vehicle.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

//Header Guards
#ifndef PLANE_H
#define PLANE_H
#include <iostream>
#include "Vehicle.h"

using namespace std;

//setup Class

class Plane: virtual public Vehicle{
    
    private:
        int altitude;
    public:
        Plane(double mFuel);
        int getAltitude();
        void setAltitude(int al);
        void showDash();
        void operate(double minutes, double speed);
        
};


#endif






