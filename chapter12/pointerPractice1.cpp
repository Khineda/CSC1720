/********************************************************************** 

* File Name: pointerPractice1.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/3/2025

* Path: /home/students/jvanwing/CSC1720/chapter12/pointerPractice1.cpp

* Description: This program asks the user to enter integers, and then stores them in 2 variables, then uses pointers to display said values

* Compile: g++ pointerPractice1.cpp -o pointerPractice1.out

* Run File: ./pointerPractice1.out

* Additional Files: 

* Help Recieved: 

***********************************************************************/ 

#include <iostream>

using namespace std;

int main()
{
    //Define a and b, for the user to input values
    int a;
    int b;
    int* ptrA = &a;
    int* prtB = &b;

    //Prompt the user to enter the values
    cout << "Please enter the first integer: ";
    cin >> a;
    cout << "Please enter the second integer: ";
    cin >> b;

    //Output the values using pointers
    cout << "The first integer is: " << *ptrA << endl;
    cout << "The second integer is: " << *prtB << endl;

    return 0;
}