/********************************************************************** 

* File Name: ListImpB.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListImpB.cpp

* Description: This is the implementation file containing the class for the ListTestB.cpp program

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy + AI

* Compile: g++ ListTestB.cpp ListImpB.cpp -o ListTestB.out

* Run: ./ListTestB.out

***********************************************************************/

#include "ListB.h"
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

//Add Element Function
void List::addElement(int val)
{
    //Resizing the array
    if (size == capacity)
    {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }
    else
    {
        arr[size] = val;
        size++;
    }
}