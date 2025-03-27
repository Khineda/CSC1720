/********************************************************************** 

* File Name: arrayListTypeImp.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/23/2025

* Path: /home/students/jvanwing/CSC1720/labOrderedArrayBasedList/arrayListTypeImp.cpp

* Description: This is the implementation file containing the class for the orderedArrayListTest.cpp program

* Additional Files: arrayListType.h arrayListTypeImp.cpp orderedArrayListType.h orderedArrayListTypeImp.cpp orderedArrayListTest.cpp

* Help Recieved: 

* Compile: g++ arrayListTypeImp.cpp orderedArrayListTypeImp.cpp orderedArrayListTest.cpp -o orderedArrayListTest.out

* Run: ./orderedArrayListTest.out

***********************************************************************/



#include <iostream> 
#include "arrayListType.h" 
 
using namespace std;

bool arrayListType::isEmpty() const
{
    return (length == 0);
} //end isEmpty

bool arrayListType::isFull() const  
{
    return (length == maxSize);
} //end isFull

int arrayListType::listSize() const
{
	return length;
} //end listSize

int arrayListType::maxListSize() const
{
	return maxSize;
} //end maxListSize

void arrayListType::print() const
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
} //end print

bool arrayListType::isItemAtEqual(int location, int item)  const
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed "
             << "is out of range." << endl;

        return false;
    }
    else
        return (list[location] == item);
} //end isItemAtEqual

void arrayListType::removeAt(int location)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i+1];

        length--;
    }
} //end removeAt

void arrayListType::retrieveAt(int location, int& retItem) const
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be retrieved is "
             << "out of range" << endl;
    else
        retItem = list[location];
} //end retrieveAt

void arrayListType::clearList()
{
    length = 0;
} //end clearList

arrayListType::arrayListType(int size)
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
} //end constructor

arrayListType::~arrayListType()
{
    delete [] list;
} //end destructor

arrayListType::arrayListType(const arrayListType& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;

    list = new int[maxSize]; 	//create the array

    for (int j = 0; j < length; j++)  //copy otherList
        list [j] = otherList.list[j];
}//end copy constructor
