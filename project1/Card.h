/********************************************************************** 

* File Name: Card.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/24/2025

* Path: /home/students/jvanwing/CSC1720/project1/Card.h

* Description: This is the header file containing the class for the Card.cpp program

* Compile: g++ Deck.cpp Blackjack.cpp Card.cpp Hand.cpp -o Blackjack.out

* Execute: ./Card.out

* Additional Files: Card.cpp, CardTest.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 


//Header Gaurds
#ifndef CARD_H
#define CARD_H

#include<iostream>
using namespace std;

//setup class
class Card
{

    private:
        string number;
        string suit;
        string name;
        int id;
        int value;
    public:

        Card(int i = 0);
        string getNumber();
        string getSuit();
        string getName();
        int getValue();
        
};

#endif