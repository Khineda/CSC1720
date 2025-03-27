/********************************************************************** 

* File Name: orderedArrayListTypeImp.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/23/2025

* Path: /home/students/jvanwing/CSC1720/labOrderedArrayBasedList/orderedArrayListTypeImp.cpp

* Description: This is the implementation file containing the ordered class for the orderedArrayListTest.cpp program

* Additional Files: arrayListType.h arrayListTypeImp.cpp orderedArrayListType.h orderedArrayListTypeImp.cpp orderedArrayListTest.cpp

* Help Recieved: AI

* Compile: g++ arrayListTypeImp.cpp orderedArrayListTypeImp.cpp orderedArrayListTest.cpp -o orderedArrayListTest.out

* Run: ./orderedArrayListTest.out

***********************************************************************/


#include <iostream>
#include "orderedArrayListType.h"

using namespace std;

orderedArrayListType::orderedArrayListType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
             << "an array of the size 100." << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;

    list = new int[maxSize];
}
void orderedArrayListType::insertAt(int location, int insertItem)
{
    if (location < 0 || location >= length)
        {
            cout << "The location of the item to be inserted "
             << "is out of range." << endl;
        }
    else if (length >= maxSize)  //list is full
        {
            cout << "Cannot insert in a full list." << endl;
        }
    else
    {
        for (int i = length; i > location-1; i--)
             list[i] = list[i - 1];  //move the elements down

        list[location - 1] = insertItem;  //insert insertItem
        length++;   //increment the length
    }
}

void orderedArrayListType::insertEnd(int insertItem)
{
    if (length >= maxSize)  //the list is full
        {
            cout << "Cannot insert in a full list." << endl;
        }
    else
    {
        list[length] = insertItem;  //insert the item at the end
        length++;   //increment the length
    }
}

void orderedArrayListType::replaceAt(int repItem, int location)
{
    if (location < 0 || location >= length)
        {
            cout << "The location of the item to be replaced "
             << "is out of range." << endl;
        }
    else
    {
        list[location - 1] = repItem;
    }
} 

int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
    {
        if (list[loc] == searchItem)
        {
            found = true;
            break;
        }
    }

    if (found)
        return loc;
    else
        return -1;
}



void orderedArrayListType::insert(int insertItem)
{
    if (length == 0)          //list is empty
        list[length++] = insertItem;  //insert insertItem
                                      //and increment length
    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
          //Find the location in the list where to insert 
          //insertItem.
        int loc;

        bool found = false;

        for (loc = 0; loc < length; loc++)
        {
            if (list[loc] >= insertItem)
            {
                found = true;
                break;
            }
        }

        for (int i = length; i > loc; i--)
             list[i] = list[i - 1];  //move the elements down

        list[loc] = insertItem;  //insert insertItem
        length++;   //increment the length
    }
} //end insert

void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
}
