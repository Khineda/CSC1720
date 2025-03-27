/********************************************************************** 

* File Name: lab1d.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 1/9/2025

* Path: /home/students/jvanwing/CSC1720/lab1/lab1d.cpp

* Description: This program is designed to read data from a file, then output the said information to the user

* Compile: g++ lab1d.cpp -o lab1d.out

* Execute: ./lab1d.out

* Additional Files: treedata.txt

* Help Recieved: Gio Kennedy

***********************************************************************/ 

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
//creation of the struct,
struct Tree
{
    string type;
    int age;
    double height;
};

int main()
{
    //Setting decimal to 2 spaces for height
    cout << fixed << showpoint << setprecision(2);

    //Welcomes the User to the program, explains it
    cout << "Welcome to Tree Info Database!" << endl;
    cout << "This program was made to read data from a file, then output the said information to the user!" << endl << endl;

    //Initialize array
    Tree treeArray[100];

    //Open the file for reading
    ifstream inFile;
    inFile.open("treedata.txt");

    //setup count for readint the file
    int treeCount = 0;

    //read info inside the file, and apply to array and structs, treeCount = index for trees
    while(!inFile.eof())
    {
        //Tree 1
        inFile >> treeArray[treeCount].type;
        inFile >> treeArray[treeCount].age;
        inFile >> treeArray[treeCount].height;
        treeCount++;

        //Tree 2
        inFile >> treeArray[treeCount].type;
        inFile >> treeArray[treeCount].age;
        inFile >> treeArray[treeCount].height;
        treeCount++;

        //Tree 3
        inFile >> treeArray[treeCount].type;
        inFile >> treeArray[treeCount].age;
        inFile >> treeArray[treeCount].height;
        treeCount++;

        //Tree 4
        inFile >> treeArray[treeCount].type;
        inFile >> treeArray[treeCount].age;
        inFile >> treeArray[treeCount].height;
        treeCount++;

        //Tree 5
        inFile >> treeArray[treeCount].type;
        inFile >> treeArray[treeCount].age;
        inFile >> treeArray[treeCount].height;
        treeCount++;
    }

    //output data for user to read
    cout << "Type      Age   Height" << endl;
    for (int i = 0; i < treeCount; i++) 
        {
            cout << left << setw(10) << treeArray[i].type << setw(6) << treeArray[i].age << treeArray[i].height << endl;
        }
    inFile.close();

    return 0;
}