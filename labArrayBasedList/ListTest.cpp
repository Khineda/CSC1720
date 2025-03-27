/********************************************************************** 

* File Name: ListTest.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListTest.cpp

* Description: This is the testing file for the List Class

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTest.cpp ListImp.cpp -o ListTest.out

* Run: ./ListTest.out

***********************************************************************/

#include "List.h"
#include <iostream>

using namespace std;

int main()
{
    List list1(5);
    list1.print();
    list1.~List();
    return 0;
}