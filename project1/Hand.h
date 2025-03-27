/********************************************************************** 

* File Name: Hand.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/30/2025

* Path: /home/students/jvanwing/CSC1720/project1/Hand.h

* Description: This is the header file containing the class for the Hand.cpp program

* Compile: g++ Deck.cpp Blackjack.cpp Card.cpp Hand.cpp -o Blackjack.out

* Execute: ./Blackjack.out

* Additional Files: Deck.cpp, Hand.cpp, Card.cpp, Blackjack.cpp

* Help Recieved: 

***********************************************************************/ 
//Header Guards
#ifndef HAND_H
#define HAND_H
#include "Deck.h"
#include "Card.h"

//Setup Class
class Hand
{
    private:
    Card cards[5];
    int numOfCards;
    
    public:
    void addCard(Card c);
    int getHandValue();
    void printHand(bool showAll);
    void clear();
};

#endif