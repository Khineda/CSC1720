#include <iostream>

using namespace std;

//set up class
class Drink
{
    //Set up private type variables
    private:
        string name;
        int size;
        double price;

    //Set up public type set and get for each private varibles
    public:
        void setName(string n);
        string getName();
        void setSize(int s);
        int getSize();
        void setPrice(double p);
        double getPrice();
};
