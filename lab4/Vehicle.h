/********************************************************************** 

* File Name: Vehicle.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Vehicle.h

* Description: This is the header file containing the class for the Vehicle.cpp program

* Additional Files: Vehicle.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

//Header Guards
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;
//setup Class

class Vehicle{

    private:
        double maxFuel;
        double fuel;
        double distance;
    public:
        Vehicle (double mFuel);
        double getFuel();
        void addFuel(double df);
        void setFuel(double f);
        double getDistance();
        void setDistance(double ds);
        void showDash();
        void virtual operate(double minutes, double speed) = 0;

};


#endif