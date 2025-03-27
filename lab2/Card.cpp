/********************************************************************** 

* File Name: Card.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/24/2025

* Path: /home/students/jvanwing/CSC1720/lab2/Card.cpp

* Description: This is the cpp file containing the function definitions for the Card class, that will be
used in the CardTest.cpp

* Compile: g++ Card.cpp CardTest.cpp -o Card.out

* Execute: ./Card.out

* Additional Files: Card.h, CardTest.cpp

* Help Recieved: Gio Kennedy

***********************************************************************/ 


//Header Gaurds


#include <string>
#include <iostream>
#include "Card.h"
using namespace std;


Card::Card(int i)
{
    id = i;
}

string Card::getNumber()
{
    if(id%13==0)
    {
        return "Ace";
    }
    else if(id%13==1)
    {
        return "2";
    }
    else if(id%13==2)
    {
        return "3";
    }
    else if(id%13==3)
    {
        return "4";
    }
    else if(id%13==4)
    {
        return "5";
    }
    else if(id%13==5)
    {
        return "6";
    }
    else if(id%13==6)
    {
        return "7";
    }
    else if(id%13==7)
    {
        return "8";
    }
    else if(id%13==8)
    {
        return "9";
    }
    else if(id%13==9)
    {
        return "10";
    }
    else if(id%13==10)
    {
        return "Jack";
    }
    else if(id%13==11)
    {
        return "Queen";
    }
    else if(id%13==12)
    {
        return "King";
    }
    else
    {
        return "";
    }
}

string Card::getSuit()
{
    if(id<=12)
    {
        return "Clubs";
    }
    else if(id>=13 && id<=25)
    {
        return "Diamonds";
    }
    else if(id>=26 && id<=38)
    {
        return "Hearts";
    }
    else
    {
        return "Spades";
    }
}

string Card::getName()
{
    string name;
    name = getNumber() + " of " + getSuit();
    return name; 
}

int Card::getValue()
{
    if (id%13==0)
    {
        return 11;
    }
    else if(id%13==9||id%13==10||id%13==11||id%13==12)
    {
        return 10;
    }

    else
    {
        int val = id % 13;
        val = val + 1;
        return val;
    }
}

