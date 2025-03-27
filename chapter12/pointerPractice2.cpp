/********************************************************************** 

* File Name: pointerPractice2.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/3/2025

* Path: /home/students/jvanwing/CSC1720/chapter12/pointerPractice2.cpp

* Description: This program finds the max value in an array of integers with a size of 4 that are entered in by the user, using pointers

* Compile: g++ pointerPractice2.cpp -o pointerPractice2.out

* Run File: ./pointerPractice2.out

* Additional Files: 

* Help Recieved: 

***********************************************************************/ 

#include <iostream>

using namespace std;

int main()
{
    //Define array, set pointer to first value
    int array[4];
    int* ptrMax = &array[0];

    //Prompt the user to enter the values
    for (int i = 0; i < 4; i++)
    {
        cout << "Please enter integer " << i+1 << ": ";
        cin >> array[i];
    }

    //Find the max value by comparing each value
    for (int j = 0; j < 4; j++)
    {
        if (*ptrMax < array[j])
        {
            ptrMax = &array[j];
        }
    }

    //Output the max value
    cout << "The max value is: " << *ptrMax << endl;

    return 0;
}