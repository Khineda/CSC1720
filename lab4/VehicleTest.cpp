/********************************************************************** 

* File Name: VehicleTest.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/11/2025

* Path: /home/students/jvanwing/CSC1720/lab4/VehicleTest.cpp

* Description: This is the .cpp file that tests the outputs of the Vehicle class and its children

* Compile: g++ Vehicle.cpp Plane.cpp Car.cpp Boat.cpp VehicleTest.cpp -o VehicleTest.out

* Run File: ./VehicleTest.out

* Additional Files: Vehicle.cpp Plane.cpp Car.cpp Boat.cpp

* Help Recieved: 

***********************************************************************/ 

#include <iostream>
#include "Vehicle.h"
#include "Plane.h"
#include "Car.h"
#include "Boat.h"

using namespace std;

int main (){
    Boat b(1000);
    Plane p(1000);
    Car c(52);

    // Testing Boat
    b.setFloating(true);
    b.setFuel(900);
    b.showDash();
    cout << endl;
    b.operate(60, 30);
    b.showDash();
    cout << endl;

    // Testing Plane
    p.setFuel(1000);
    p.setAltitude(28000);
    p.showDash();
    cout << endl;
    p.operate(300, 600);
    p.showDash();
    cout << endl;

    // Testing Car
    c.setFuel(40);
    c.addFuel(9.5);
    c.setTirePressure(35);
    c.showDash();
    cout << endl;
    c.operate(120, 60);
    c.showDash();
    cout << endl;
    c.operate(90, 90);
    c.showDash();
    cout << endl;

    return 0;

}