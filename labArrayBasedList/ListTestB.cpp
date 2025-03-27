/********************************************************************** 

* File Name: ListTestB.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListTestB.cpp

* Description: This is the testing file for the ListB Class

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTestB.cpp ListImpB.cpp -o ListTestB.out

* Run: ./ListTestB.out

***********************************************************************/

#include "ListB.h"
#include <iostream>

using namespace std;

int main()
{
    List list1(5);
    list1.addElement(1);
    list1.addElement(2);
    list1.addElement(3);
    list1.addElement(4);
    list1.addElement(5);
    list1.print();
    list1.addElement(6);
    list1.addElement(7);
    list1.addElement(8);
    list1.print();
    list1.~List();
    return 0;
}