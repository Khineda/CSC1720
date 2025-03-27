/********************************************************************** 

* File Name: Deck.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/27/2025

* Path: /home/students/jvanwing/CSC1720/project1/Deck.h

* Description: This is the header file containing the class for the Deck.cpp program

* Compile: g++ Deck.cpp Blackjack.cpp Card.cpp Hand.cpp -o Blackjack.out

* Execute: ./Blackjack.out

* Additional Files: Deck.cpp, Hand.cpp, Card.cpp, Blackjack.cpp

* Help Recieved: 

***********************************************************************/ 
//Header Guards
#ifndef DECK_H
#define DECK_H
#include "Card.h"

//Sets up the class
class Deck
{
    private:
    Card card[52];
    int top;

    public:
    Deck();
    void shuffle();
    Card draw();
};

#endif