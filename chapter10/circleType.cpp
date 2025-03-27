/********************************************************************** 

* File Name: circleType.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: January 22, 2025

* Path: /home/students/jvanwing/CSC172/chapter10/circleType.cpp

* Compile: g++ circleType.cpp circleTypeTest.cpp -o circleType.out

* Execute: ./circleType.out

* Additional Files: circleType.h, circleTypeTest.cpp

* Code Received from chapter 10, example 8 page 742

***********************************************************************/ 
#include "circleType.h"

void circleType::setRadius(double r)
{
if (r >= 0)
radius = r;
else
radius = 0;
}

double circleType::getRadius()
{
return radius;
}

double circleType::area()
{
return 3.1416 * radius * radius;
}

double circleType::circumference()
{
return 2 * 3.1416 * radius;
}

circleType::circleType(double r)
{
setRadius(r);
}