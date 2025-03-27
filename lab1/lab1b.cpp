/********************************************************************** 

* File Name: lab1b.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/9/2025

* Path: /home/students/jvanwing/CSC1720/lab1/lab1b.cpp

* Description: This program is designed to allow the user to input data about a tree into a database, then read that database

* Compile: g++ lab1b.cpp -o lab1b.out

* Execute: ./lab1b.out

* Additional Files: N/A

* Help Recieved: N/A

***********************************************************************/ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Welcomes the User to the program, explains it
    cout << "Welcome to Tree Info Database!" << endl;
    cout << "This program was made to let you input information about a tree, then read the said input!" << endl << endl;

    //creation of the struct, defining t1 as the tree the user will input the data for
    struct Tree
    {
        string type;
        int age;
        double height;
    };
    Tree t1;

    //prompt user to input the tree type, age, and height, then store it in t1
    //type
    cout << "Please enter in your Tree type(Oak, Birch, Spruce...etc): ";
    cin >> t1.type;
    cout << endl;
    //age
    cout << "Now enter in your Tree age in years(2, 32...etc): ";
    cin >> t1.age;
    cout << endl;
     if(t1.age < 0)
    {
        cout << "Please enter a number larger than zero: " << endl;
        cin >> t1.age;
        cout << endl;
    }
    //height
    cout <<"Now enter in your Tree height in feet(6.8 24.25...etc): ";
    cin >> t1.height;
    if(t1.height < 0)
    {
        cout << "Please enter a number larger than zero" << endl;
        cin >> t1.height;
    }
    cout << endl << "Information Stored!" << endl;

    //Output the info to the user

    cout << "Tree Type: " << t1.type << endl;
    cout << "Tree Age: " << t1.age << " Years old." << endl;
    cout << "Tree Height: " << t1.height << " Feet tall." << endl;

    return 0;
}
