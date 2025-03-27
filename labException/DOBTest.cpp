/********************************************************************** 

* File Name: DOBTest.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/13/2025

* Path: /home/students/jvanwing/CSC1720/labException/DOBTest.cpp

* Description: This is the test file for the class DOB for the DOBTest.cpp program

* Additional Files: DOB.h DOBImp.cpp DOBTest.cpp InvalidDay.h  InvalidMonth.h 

* Help Recieved: Gio Kennedy

* Compile: g++ DOBImp.cpp DOBTest.cpp -o DOBTest.out

* Run: ./DOBTest.out

***********************************************************************/

#include "DOB.h"
#include "InvalidMonth.h"
#include "InvalidDay.h"

#include <iostream>

using namespace std;

int main()
{
    DOB test;
    test.enterDay(test.enterMonth(),test.enterYear());
    test.printBirthDate();

}