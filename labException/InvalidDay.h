/********************************************************************** 

* File Name: InvalidDay.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/13/2025

* Path: /home/students/jvanwing/CSC1720/labException/InvalidDay.h

* Description: This is the header file containing the exception class for the DOBTest.cpp program

* Additional Files: DOB.h DOBImp.cpp DOBTest.cpp InvalidDay.h  InvalidMonth.h 

* Help Recieved: Gio Kennedy

* Compile: g++ DOBImp.cpp DOBTest.cpp -o DOBTest.out

* Run: ./DOBTest.out

***********************************************************************/

//Header Guards
#ifndef INVALIDDAY_H
#define INVALIDDAY_H

#include <iostream>

using namespace std;

//setup Class

class InvalidDay
{

    private:
        string error1;
        string error2;
        string error3;
        string error4;
    public:
        InvalidDay()
        {
            error1 = "Day must be between 1 - 30.";
            error2 = "Day must be between 1 - 31.";
            error3 = "Day must be between 1 - 29.";
            error4 = "Day must be between 1 - 28.";

        }
        string getError1()
        {
            return error1;
        }
        string getError2()
        {
            return error2;
        }
        string getError3()
        {
            return error3;
        }
        string getError4()
        {
            return error4;
        }
    
};


#endif