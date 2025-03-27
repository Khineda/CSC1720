#include <iostream>
#include "Turtle.h"
using namespace std;


void Turtle::setType(string t)
{
    type = t;
}

string Turtle::getType()
{
    return type;
}

void Turtle::setAge(int a)
{
    age = a;
}

int Turtle::getAge()
{
    return age;