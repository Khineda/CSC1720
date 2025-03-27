/********************************************************************** 

* File Name: ListTestC.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/10/2025

* Path: /home/students/jvanwing/CSC1720/labArrayBasedList/ListTestC.cpp

* Description: This is the testing file for the ListC Class

* Additional Files: List.h ListImp.cpp ListTest.cpp, ListB.h ListBImp.cpp ListBTest.cpp, ListC.h ListCImp.cpp ListCTest.cpp

* Help Recieved: Gio Kennedy

* Compile: g++ ListTestC.cpp ListImpC.cpp -o ListTestC.out

* Run: ./ListTestC.out

***********************************************************************/

#include "ListC.h"
#include <iostream>

using namespace std;

int main()
{
    List list1(10);
    list1.addElement(1);
    list1.addElement(2);
    list1.addElement(3);
    list1.addElement(4);
    list1.addElement(5);
    list1.addElement(6);
    list1.addElement(7);
    list1.addElement(8);
    list1.addElement(9);
    list1.addElement(10);
    list1.removeElement(1);
    list1.removeElement(2);
    list1.removeElement(3);
    list1.removeElement(4);
    list1.print();
    list1.removeElement(5);
    list1.removeElement(6);
    list1.removeElement(7);
    list1.removeElement(8);
    list1.print();
    list1.~List();
    return 0;
}