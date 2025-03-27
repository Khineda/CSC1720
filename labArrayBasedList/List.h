/********************************************************************** 

* File Name: List.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/List.h

* Description: This is the header file containing the class for the ListTest.cpp program

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTest.cpp ListImp.cpp -o ListTest.out

* Run: ./ListTest.out

***********************************************************************/

//Header Guards
#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

//setup Class

class List
{
    private:
        int* arr;
        int capacity;
        int size;
    public:
        List(int cap);
        ~List();
        void print();
};


#endif