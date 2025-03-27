/********************************************************************** 

* File Name: Vector2DImp.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/6/2025

* Path: /home/students/jvanwing/CSC1720/labOverload/Vector2DImp.cpp

* Description: This is the implementation file containing the functions for the Vector2DTest.cpp program

* Additional Files: Vector2D.h Vector2DImp.cpp Vector2DTest.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/

#include "Vector2D.h"
#include <iostream>
#include <cmath>

using namespace std;

//Constrcutor
Vector2D::Vector2D(double x1 , double y1)
{
    x = x1;
    y = y1;
}

//Display function
void Vector2D::display()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

//Addition operator, displays the new vector automatically
Vector2D Vector2D::operator+(Vector2D& otherVector)
{
    double newx = x + otherVector.x;
    double newy = y + otherVector.y;
    Vector2D newVector(newx, newy);
    return newVector;
}

//Subtraction operator, displays the new vector automatically
Vector2D Vector2D::operator-(Vector2D& otherVector)
{
    double newx = x - otherVector.x;
    double newy = y - otherVector.y;
    Vector2D newVector(newx, newy);
    return newVector;
}

//Multiplication operator, displays the new vector automatically
Vector2D Vector2D::operator*(double scalar)
{
    double newx = x * scalar;
    double newy = y * scalar;
    Vector2D newVector(newx, newy);
    return newVector;
}

//Add and assign operator, displays the new vector automatically
Vector2D Vector2D::operator+=(Vector2D& otherVector)
{
    this->x += otherVector.x;
    this->y += otherVector.y;
    return *this;
}

//Equality operator, returns true if the vectors are equal
bool Vector2D::operator==(Vector2D& otherVector)
{
    if(x == otherVector.x && y == otherVector.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Vector2D::magnitude()
{
    double mag = sqrt(pow(x, 2) + pow(y, 2));
    return mag;
}