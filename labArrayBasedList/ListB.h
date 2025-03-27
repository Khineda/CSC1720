/********************************************************************** 

* File Name: ListB.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListB.h

* Description: This is the header file containing the class for the ListTestB.cpp program

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTestB.cpp ListImpB.cpp -o ListTestB.out

* Run: ./ListTestB.out

***********************************************************************/

//Header Guards
#ifndef LISTB_H
#define LISTB_H
#include <iostream>

using namespace std;

//setup Class

class List
{
    private:
        int* arr;
        int capacity;
        int size;
        int value;
    public:
        List(int cap);
        ~List();
        void print();
        void addElement(int val);
};


#endif