#include <iostream>
#include "Drink.h"
using namespace std;

//set a variable for storing the name of the drink
void Drink::setName(string n)
{
    name = n;
}
//"get" or returns the name of the drink when prompted
string Drink::getName()
{
    return name;
}
//set a variable for storing the size of the drink
void Drink::setSize(int s)
{
    size = s;
}
//"get" or returns the size of the drink when prompted
int Drink::getSize()
{
    return size;
}
//set a variable for storing the price of the drink
void Drink::setPrice(double p)
{
    price = p;
}
//"get" or returns the price of the drink when prompted
double Drink::getPrice()
{
    return price;
}