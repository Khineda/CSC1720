/********************************************************************** 

* File Name: MoviePartA.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/6/2025

* Path: /home/students/jvanwing/CSC1720/lab3/Movie.cpp

* Description: This is the .cpp containing the code necissary to execute Part A for Lab 3 assignment, using the class from Movie.h

* Compile: g++ Movie.cpp MoviePartA.cpp -o MoviePartA.out

* Execute: ./MoviePartA.out

* Additional Files: Movie.h

* Help Recieved: Gio Kennedy

***********************************************************************/ 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits> //ADDED BY AI
#include "Movie.h"

using namespace std;

int main()
{

    //Variable and array creation
    string t = "";
    int y = 0;
    string rate = "";
    int run = 0;
    Movie movieLibrary[200];
    int movieTotal = 0;

    /*(NON AI, My code that didnt work)
    //Collect data for the array, from the file
    while(!inData.eof()){
        getline(inData, t);
        inData >> y;
        inData >> rate;
        inData >> run;
        inData.ignore(); // AI GENERATED SOLUTION
        Movie m(t, y, rate, run);
        movieLibrary[movieTotal] = m;
        movieTotal++;
    }
    */

    //Open the input file
    ifstream inData;
    inData.open("movies.txt");

   //(AI GENERATED) Collect data for the array, from the file
   while(getline(inData, t)){
    if (inData >> t >> y >> rate >> run) {
        inData.ignore(); // Ignore the newline character after reading the integers
        Movie m(t, y, rate, run);
        movieLibrary[movieTotal] = m;
        movieTotal++;
    } else {
        break; // Exit the loop if reading fails
    }
    }



    //Print Movie data as requested by Lab
    cout << left;
    cout << setw(4) << "~";
    cout << setw(60) << "Movie Title:";
    cout << setw(10) << "Year:";
    cout << setw(10) << "Rating:";
    cout << setw(10) << "Runtime:" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (int i = 0; i < movieTotal; i++){
        cout << setw(4) << i;
        cout << setw(60) << movieLibrary[i].getTitle();
        cout << setw(10) << movieLibrary[i].getYear();
        cout << setw(10) << movieLibrary[i].getRating();
        cout << setw(10) << movieLibrary[i].getRuntime() << endl;
    }

    //Close the file
    inData.close();

    return 0;
}   
