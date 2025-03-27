/********************************************************************** 

* File Name: DOB.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/13/2025

* Path: /home/students/jvanwing/CSC1720/labException/DOB.h

* Description: This is the header file containing the class for the DOBTest.cpp program

* Additional Files: DOB.h DOBImp.cpp DOBTest.cpp InvalidDay.h  InvalidMonth.h 

* Help Recieved: Gio Kennedy

* Compile: g++ DOBImp.cpp DOBTest.cpp  -o DOBTest.out

* Run: ./DOBTest.out

***********************************************************************/

//Header Guards
#ifndef DOB_H
#define DOB_H

#include <iostream>
using namespace std;

//setup Class

class DOB
{
    private:
        int day;
        int month;
        int year;
    public:
        DOB();
        int enterYear();
        int enterMonth();
        int enterDay(int mth, int yr);
        bool isLeapYear(int yr);
        void printBirthDate();
};

#endif