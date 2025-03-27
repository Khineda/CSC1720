/********************************************************************** 

* File Name: Deck.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/28/2025

* Path: /home/students/jvanwing/CSC1720/lab2/Deck.cpp

* Description: THis program will use a class of cards that will shuffle and lets them draw from it

* Compile: g++ Deck.cpp DeckTest.cpp Card.cpp -o Deck.out

* Execute: ./Deck.out

* Additional Files: Deck.cpp, DeckTest.cpp Card.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 

#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructs the class
Deck::Deck()
{
    for(int i=0; i<52; i++)
    {
        card[i] = Card(i);
    
    }
    shuffle();
    top = 0;

}

//Draw function, draws a card off the top of the deck
Card Deck:: draw()
{
    if (top >= 52)
    {
        cout << "No cards left in the deck, please restart!" << endl;
    }
    return card[top++];
}

void Deck::shuffle()
{
   srand(time(0));
   for(int i=51; i>0; i--)
   {
        int j = rand()%(i+1);
        Card temp = card[i];
        card[i] = card[j];
        card[j] = temp;
   } 
}
