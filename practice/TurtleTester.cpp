#include <iostream>
#include "Turtle.h"
using namespace std;

int main()
{
    Turtle t1;
    t1.setType("Sea Turtle");
    t1.setAge(100);
    cout << "The " << t1.getType() << " is " << t1.getAge() << " years old." << endl;
}