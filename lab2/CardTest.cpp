/********************************************************************** 

* File Name: Card.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/24/2025

* Path: /home/students/jvanwing/CSC1720/lab2/CardTest.cpp

* Description: This is the test file for the class Card

* Compile: g++ Card.cpp CardTest.cpp -o Card.out

* Execute: ./Card.out

* Additional Files: Card.h, Card.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 


using namespace std; 
#include <iostream>
#include "Card.h"

int main()
{
    for(int i = 0; i < 52; i++)
    {
        Card card1(i);
        cout << card1.getNumber() << endl;
        cout << card1.getSuit() << endl;
        cout << card1.getName() << endl;
        cout << card1.getValue() << endl << endl;
    }
    return 0;
}