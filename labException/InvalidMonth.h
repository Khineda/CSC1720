/********************************************************************** 

* File Name: InvalidMonth.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/13/2025

* Path: /home/students/jvanwing/CSC1720/labException/InvalidMonth.h

* Description: This is the header file containing the exception class for the DOBTest.cpp program

* Additional Files: DOB.h DOBImp.cpp DOBTest.cpp InvalidDay.h  InvalidMonth.h 

* Help Recieved: Gio Kennedy

* Compile: g++ DOBImp.cpp DOBTest.cpp -o DOBTest.out

* Run: ./DOBTest.out

***********************************************************************/

//Header Guards
#ifndef INVALIDMONTH_H
#define INVALIDMONTH_H

#include <iostream>

using namespace std;

//setup Class

class InvalidMonth
{
    private:
        string error1;
        string error2;
    public:
        InvalidMonth()
        {
            error1 = "Month can not be less than 1.";
            error2 = "Month can not be greater than 12.";
        }
        string getError1()
        {
            return error1;
        }
        string getError2()
        {
            return error2;
        }
    
};

#endif