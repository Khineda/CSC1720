/********************************************************************** 

* File Name: orderedArrayListType.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/23/2025

* Path: /home/students/jvanwing/CSC1720/labOrderedArrayBasedList/orderedArrayListType.h

* Description: This is the header file containing the ordered class for the orderedArrayListTest.cpp program

* Additional Files: arrayListType.h arrayListTypeImp.cpp orderedArrayListType.h orderedArrayListTypeImp.cpp orderedArrayListTest.cpp

* Help Recieved: 

* Compile: g++ arrayListTypeImp.cpp orderedArrayListTypeImp.cpp orderedArrayListTest.cpp -o orderedArrayListTest.out

* Run: ./orderedArrayListTest.out

***********************************************************************/


#ifndef H_orderedArrayListType
#define H_orderedArrayListType
 
#include "arrayListType.h"  
 
class orderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void insert(int insertItem);
    void remove(int removeItem);

    orderedArrayListType(int size = 100);
       //Constructor
};

#endif
