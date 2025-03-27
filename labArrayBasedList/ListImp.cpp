/********************************************************************** 

* File Name: ListImp.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListImp.cpp

* Description: This is the implementation file containing the class for the ListTest.cpp program

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTest.cpp ListImp.cpp -o ListTest.out

* Run: ./ListTest.out

***********************************************************************/

#include "List.h"
#include <iostream>

using namespace std;

//Constructor
List::List(int cap)
{
    capacity = cap;
    arr = new int[capacity];
    size = 0;
}

//Destructor
List::~List()
{
    delete[] arr;
}

//Print Function
void List::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}