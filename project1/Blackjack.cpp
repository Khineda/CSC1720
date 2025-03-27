/********************************************************************** 

* File Name: Blackjack.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/30/2025

* Path: /home/students/jvanwing/CSC1720/project1/Blackjack.cpp

* Description: This is the file containing the Blackjack game

* Compile: g++ Deck.cpp Blackjack.cpp Card.cpp Hand.cpp -o Blackjack.out

* Execute: ./Blackjack.out

* Additional Files: Deck.cpp, Hand.cpp, Card.cpp, Blackjack.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 

#include <iostream>
#include <iomanip>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"

using namespace std;

int main(){
    //Declare variables
    int money = 100;
    int bet;
    Deck deck;
    Hand playerHand;
    Hand dealerHand;

    //welcome user
    cout << "######### Welcome to Blackjack~! #########" << endl;

    //While loop makes sure the player has money to bet
    while(money > 0){
        //shuffle deck, clear both hands
        deck.shuffle();
        playerHand.clear();
        dealerHand.clear();

        //Tell user money amount they have, prompt them to answer how much to bet
        cout << "Money: $" << money << endl;
        cout << "Enter bet amounnt: $";
        cin >> bet;
        cout << endl;
        
        //Check that money entered is enough
        if(bet > money){
            cout << "Please enter an amount less than what you have: $";
            cin >> bet;
            cout << endl;
        }

        //Deal dealer 2 cards, deal player 2 cards
        dealerHand.addCard(deck.draw());
        dealerHand.addCard(deck.draw());
        playerHand.addCard(deck.draw());
        dealerHand.addCard(deck.draw());

        // Tell player their cards and hand value
        cout << "Your cards: " << endl;
        playerHand.printHand(true);
        cout << "Hand Value: " << playerHand.getHandValue() << endl;

        //Tell player Dealers cards

        cout << "Dealer's Visible Card: " << endl;
        dealerHand.printHand(false);
        
        //Check if either has blackjack

        //Stopping Point.

    }
}