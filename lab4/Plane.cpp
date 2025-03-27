/********************************************************************** 

* File Name: Plane.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Plane.h

* Description: This is the .cpp file containing the methods for the Plane class

* Compile: g++ Vehicle.cpp Plane.cpp Car.cpp Boat.cpp VehicleTest.cpp -o VehicleTest.out

* Additional Files: VehicleTest.cpp Vehicle.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

#include <iostream>
#include "Plane.h"
#include "Vehicle.h"

using namespace std;

//Constructor
Plane::Plane(double mFuel): Vehicle(mFuel){
}

int Plane::getAltitude(){
    return altitude;
}

void Plane::setAltitude(int al){
    altitude = al;
}

void Plane::showDash(){
    cout << "Plane Dashboard: " << endl;
    cout << "Fuel: " << getFuel() << " Gallons   -   Distance: " << getDistance() << " Miles   -   Altitiude: " << getAltitude() << " Feet" << endl;
}

void Plane::operate(double minutes, double speed){
    setFuel((minutes * speed) / 720);
    setDistance((minutes * speed) / 60);
}