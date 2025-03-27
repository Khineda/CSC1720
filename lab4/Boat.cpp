/********************************************************************** 

* File Name: Boat.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Boat.cpp

* Description: This is the .cpp file containing the methods for the Boat class

* Compile: g++ Vehicle.cpp Plane.cpp Car.cpp Boat.cpp VehicleTest.cpp -o VehicleTest.out

* Additional Files: VehicleTest.cpp Vehicle.cpp Plane.cpp Car.cpp

* Help Recieved: 

***********************************************************************/ 

#include <iostream>
#include "Boat.h"
#include "Vehicle.h"

using namespace std;

//Constructor

Boat::Boat(double mFuel): Vehicle(mFuel){
}

bool Boat::isFloating(){
    return floating;
}

void Boat::setFloating(bool fl){
    floating = fl;
}

void Boat::showDash(){
    cout << "Boat Dashboard: " << endl;
    cout << "Fuel: " << getFuel() << " Gallons   -   Distance: " << getDistance() << " Miles   -   Floating: " << isFloating() << endl;
}

void Boat::operate(double minutes, double speed){
    setFuel((minutes * speed) / 1800);
    setDistance((minutes * speed) / 60);
}