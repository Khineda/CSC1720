/********************************************************************** 

* File Name: Car.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Car.h

* Description: This is the header file containing the class for the Car.cpp program

* Additional Files: Vehicle.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

//Header Guards
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.h"

using namespace std;
//setup Class

class Car: virtual public Vehicle{

    private:
        double tirePressure;
    public:
        Car(double mFuel);
        double getTirePressure();
        void setTirePressure(double tp);
        void showDash();
        void operate(double minutes, double speed);
        
};


#endif