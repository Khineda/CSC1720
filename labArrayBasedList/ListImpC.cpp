/********************************************************************** 

* File Name: ListImpC.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListImpC.cpp

* Description: This is the implementation file containing the class for the ListTestC.cpp program

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy + AI

* Compile: g++ ListTestC.cpp ListImpC.cpp -o ListTestC.out

* Run: ./ListTestC.out

***********************************************************************/

#include "ListC.h"
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

//Remove Element Function

void List:: removeElement(int val)
{
    int indexTarget = -1;
    //Remove the first element that matches the value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            indexTarget = i;
            break;
        }
    }
    //If the element is found, shift the elements to the left
    if (indexTarget != -1)
    {
        for (int i = indexTarget; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    //Resize the array, if its a quarter of the size of the capacity
    if(size > 0 && size <= capacity / 4)
    {
        int newCapacity = capacity / 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }
}