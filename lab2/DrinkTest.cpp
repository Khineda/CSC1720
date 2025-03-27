#include <iostream>
#include <iomanip>
#include "Drink.h"

using namespace std;

int main()
{
    //Set up 2 drink classes, d1, and d2
    Drink d1;
    Drink d2;

    //variables for easily entering data into the classes
    string nameOne;
    string nameTwo;
    int sizeOne;
    int sizeTwo;
    double priceOne;
    double priceTwo;

    //Setting decimal to 2 spaces for price
    cout << fixed << showpoint << setprecision(2);

    //prompt the user to enter 3 different variables for drink one; name size price
    cout << "Welcome to Drink Order!" << endl << "In this program, you will enter in 3 variables for 2 drinks: Drink name, Drink size in ounces, and Drink price in $'s" << endl;
    cout << endl << "Enter the name of Drink 1: ";
    cin >> nameOne;
    cout << endl << "Enter the drink size in ounces of Drink 1 (ex: 5, 10, 24): ";
    cin >> sizeOne;

    //validate entry
    if(sizeOne < 0)
    {
        cout << endl << "Please enter a number larger than zero: ";
        cin >> sizeOne;
    }
    cout << endl << "Enter the price of Drink 1 (ex: 1.25, 5.99): ";
    cin >> priceOne;

    //validate entry
    if(priceOne < 0.00)
    {
        cout << endl << "Please enter a number larger than zero: ";
        cin >> priceOne;
    }

    //Prompt the user to repeat process for drink 2
    
    cout << endl << "Now for Drink 2, Please enter the name: ";
    cin >> nameTwo;

    cout << endl << "Enter the drink size in ounces of Drink 2: ";
    cin >> sizeTwo;

    //validate entry
    if(sizeTwo < 0)
    {
        cout << endl << "Please enter a number larger than zero: ";
        cin >> sizeTwo;
    }
    cout << endl << "Enter the price of Drink 2: ";
    cin >> priceTwo;

    //validate entry
    if(priceTwo < 0.00)
    {
        cout << endl << "Please enter a number larger than zero: ";
        cin >> priceTwo;
    }

    //stores the variables in the class
    //drink one class
    d1.setName(nameOne);
    d1.setSize(sizeOne);
    d1.setPrice(priceOne);
    //drink two class
    d2.setName(nameTwo);
    d2.setSize(sizeTwo);
    d2.setPrice(priceTwo);

    //Now outputs to the user
    cout << endl << endl << "You ordered:" << endl;
    cout << d1.getSize() << " oz. " << d1.getName() << " for $" << d1.getPrice() << endl;
    cout << d2.getSize() << " oz. " << d2.getName() << " for $" << d2.getPrice() << endl;

    return 0;
}