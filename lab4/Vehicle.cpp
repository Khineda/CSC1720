/********************************************************************** 

* File Name: Vehicle.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/Vehicle.cpp

* Description: This is the .cpp file containing the methods for the Vehicle class

* Compile: g++ Vehicle.cpp Plane.cpp Car.cpp Boat.cpp VehicleTest.cpp -o VehicleTest.out

* Additional Files: VehicleTest.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

#include <iostream>
#include "Vehicle.h"

using namespace std;

//Constructor

Vehicle::Vehicle(double mFuel){
    maxFuel = mFuel;
    fuel = mFuel;
    distance = 0;
}

double Vehicle::getFuel(){
    return fuel;
}

void Vehicle::addFuel(double df){
    fuel += df;
    if(fuel > maxFuel){
        fuel = maxFuel;
    }
}

void Vehicle::setFuel(double f){
    if(f > maxFuel){
        fuel = maxFuel;
    }
    else{
        fuel = f;
    }
}

double Vehicle::getDistance(){
    return distance;
}

void Vehicle::setDistance(double ds){
    distance = ds;
}

void Vehicle::showDash(){
    cout << "Dashboard: " << endl;
    cout << "Fuel: " << fuel << " Gallons   -   Distance: " << distance << " Miles" << endl;
}



