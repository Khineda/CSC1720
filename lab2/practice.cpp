#include <string>
#include <iostream>
using namespace std;

string getNumber(int id)
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

string getSuit(int id)
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

string getName(int id)
{
    string name;
    name = getNumber(id) + " of " + getSuit(id);
    return name; 
}

int getValue(int id)
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

int main()
{
    cout << getNumber(5) << endl;
    cout << getSuit(47) << endl;
    cout << getName(23) << endl;
    cout << getValue(23) << endl;
}
