/********************************************************************** 

* File Name: Hand.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/30/2025

* Path: /home/students/jvanwing/CSC1720/project1/Hand.cpp

* Description: This is the file containing the methods/functions for the Hand class

* Compile: g++ Deck.cpp Blackjack.cpp Card.cpp Hand.cpp -o Blackjack.out

* Execute: ./Blackjack.out

* Additional Files: Deck.cpp, Hand.h, Card.cpp, Blackjack.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 

#include <iostream>
#include <iomanip>
#include "Hand.h"
#include "Deck.h"
#include "Card.h"

using namespace std;

//Constructor
Hand::Hand(){
    numOfCards = 0;
}

//Adds card to Hannd, if amount of cards in hand is less than 5
void Hand::addCard(Card c){
    if(numOfCards >= 5){
        cout << "Hand is full, you cannot draw more." << endl;
    }
    else {
        cards[numOfCards] = c;
        numOfCards++;
    }
}

//Gets the value of the hand
int Hand::getHandValue(){
    int total = 0;
    for(int i = 0; i < numOfCards; i++){
        total += cards[i].getValue();  
    }
    return total;
}

//Prints the hand to the user to see
void Hand::printHand(bool showAll){
    if(showAll = true){
        for(int i = 0; i < numOfCards; i++){
            cout << cards[i].getName() << endl;
        }
    }
    else{
        for(int i = 1; i < numOfCards; i++){
            cout << "Hidden Card" << endl;
            cout << cards[i].getName() << endl;
        }
    }
}

// Clears the hand of cards
void Hand::clear(){
    numOfCards = 0;
}