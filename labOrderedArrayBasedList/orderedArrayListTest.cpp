/********************************************************************** 

* File Name: orderedArrayListTest.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/23/2025

* Path: /home/students/jvanwing/CSC1720/labOrderedArrayBasedList/orderedArrayListTest.cpp

* Description: This is the test file for the orderedArrayListTest.cpp program

* Additional Files: arrayListType.h arrayListTypeImp.cpp orderedArrayListType.h orderedArrayListTypeImp.cpp orderedArrayListTest.cpp

* Help Recieved: 

* Compile: g++ arrayListTypeImp.cpp orderedArrayListTypeImp.cpp orderedArrayListTest.cpp -o orderedArrayListTest.out

* Run: ./orderedArrayListTest.out

***********************************************************************/

#include <iostream>
#include "arrayListType.h"
#include "orderedArrayListType.h"


using namespace std;

int main()
{
    orderedArrayListType list1(25);
    int num;
    int place;

    list1.insert(23);
    list1.insert(45);
    list1.insert(16);
    list1.insert(77);
    list1.insert(12);
    list1.insert(33);
    list1.insert(56);
    list1.insert(39);
    list1.insert(88);
    list1.insert(49);

    cout << "List 1: ";
    list1.print();
    cout << endl;

    cout << "Enter the number to be inserted: ";
    cin >> num;
    cout << endl;
    cout << "Enter the position where the number is to be inserted: ";
    cin >> place;
    cout << endl;
    
    list1.insertAt(place, num);
    cout << "After inserting " << num << ", list1: ";
    list1.print();
    cout << endl;

    cout << "Enter the number to be inserted at the end: ";
    cin >> num;
    cout << endl;
    list1.insertEnd(num);
    cout << "After inserting " << num << " at the end, list1: ";
    list1.print();
    cout << endl;

    cout << "Enter the number to be used when inserted: ";
    cin >> num;
    cout << endl;
    cout << "Enter the position where the number is to be replaced: ";
    cin >> place;
    cout << endl;
    list1.replaceAt(num, place);
    cout << "After replacing " << num << ", list1: ";
    list1.print();
    cout << endl;

    cout << "Enter the number to be searched: ";
    cin >> num;
    cout << endl;
    place = list1.seqSearch(num);
    if (place != -1)
        cout << num << " is found at position " << place + 1 << endl;
    else
        cout << num << " is not in the list." << endl;

    cout << "Enter the number to be used when inserted: ";
    cin >> num;
    cout << endl;
    list1.insert(num);
    cout << "After inserting " << num << ", list1: ";
    list1.print();
    cout << endl;

    cout << "Enter the number to be removed: ";
    cin >> num;
    cout << endl;
    list1.remove(num);
    cout << "After removing " << num << ", list1: ";
    list1.print();
    cout << endl;

    // Was unable to get the copy constructor to work, will work on another time. We discussed this before class on 3/26/2025
    orderedArrayListType list2(list1);

    list2.print();
    cout << endl;

    cout << "Removing the first element from list2: "<< endl;
    list2.removeAt(0);
    cout << "After removing the first element, list2: " << endl;
    list2.print();
    cout << endl;
    cout << "Comparing list1 and list2: " << endl;
    cout << "list1: ";
    list1.print();
    cout << endl;
    cout << "list2: ";
    list2.print();
    cout << endl;
    
    return 0;
}