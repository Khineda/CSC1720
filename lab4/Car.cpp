/********************************************************************** 

* File Name: Car.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Car.cpp

* Description: This is the .cpp file containing the methods for the Car class

* Compile: g++ Vehicle.cpp Plane.cpp Car.cpp Boat.cpp VehicleTest.cpp -o VehicleTest.out

* Additional Files: VehicleTest.cpp Vehicle.cpp Plane.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

#include <iostream>
#include "Car.h"
#include "Vehicle.h"

using namespace std;

//Constructor

Car::Car(double mFuel): Vehicle(mFuel){
}

double Car::getTirePressure(){
    return tirePressure;
}

void Car::setTirePressure(double tp){
    tirePressure = tp;
}

void Car::showDash(){
    cout << "Car Dashboard: " << endl;
    cout << "Fuel: " << getFuel() << " Gallons   -   Distance: " << getDistance() << " Miles   -   Tire Pressure: " << getTirePressure() << " PSI" << endl;
}

void Car::operate(double minutes, double speed){
    setFuel((minutes * speed) / 1200);
    setDistance((minutes * speed) / 60);
}