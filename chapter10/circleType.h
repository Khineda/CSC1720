/********************************************************************** 

* File Name: circleType.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: January 22, 2025

* Path: /home/students/jvanwing/CSC172/chapter10/circleType.h

* Compile: g++ circleType.cpp circleTypeTest.cpp -o circleType.out

* Execute: ./circleType.out

* Additional Files: circleType.cpp, circleType.out

* Code Received from chapter 10, example 8 page 742

***********************************************************************/ 


class circleType
{
public:
void setRadius(double r);
//Function to set the radius.
//Postcondition: if (r >= 0) radius = r;
// otherwise radius = 0;
double getRadius();
//Function to return the radius.
//Postcondition: The value of radius is returned.
double area();
//Function to return the area of a circle.
//Postcondition: Area is calculated and returned.
double circumference();
//Function to return the circumference of a circle.
//Postcondition: Circumference is calculated and returned.
circleType(double r = 0);
//Constructor with a default parameter.
//Radius is set according to the parameter.
//The default value of the radius is 0.0;
//Postcondition: radius = r;
private:
double radius;
};