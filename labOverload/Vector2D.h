/********************************************************************** 

* File Name: Vector2D.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/6/2025

* Path: /home/students/jvanwing/CSC1720/labOverload/Vector2D.h

* Description: This is the header file containing the class for the Vector2DTest.cpp program

* Additional Files: Vector2D.h Vector2DImp.cpp Vector2DTest.cpp

* Help Recieved: 

***********************************************************************/

//Header Guards
#ifndef VECTOR2D_H
#define VECTOR2D_H
#include <iostream>

using namespace std;
//setup Class

class Vector2D
{
    private:
        double x;
        double y;
    public:
        Vector2D(double x1, double y1);
        void display();
        Vector2D operator+(Vector2D& otherVector);
        Vector2D operator-(Vector2D& otherVector);
        Vector2D operator*(double scalar);
        Vector2D operator+=(Vector2D& otherVector);
        bool operator==(Vector2D& otherVector);
        double magnitude();
};

#endif