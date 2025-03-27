/********************************************************************** 

* File Name: Movie.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/6/2025

* Path: /home/students/jvanwing/CSC1720/lab3/Movie.cpp

* Description: This is the .cpp containing the methods for the class defined in Movie.h header file

* Compile: g++ Movie.cpp MoviePartA.cpp -o MoviePartA.out

* Execute: ./MoviePartA.out

* Additional Files: Movie.h

* Help Recieved:

***********************************************************************/ 

#include <iostream>
#include "Movie.h"

using namespace std;
//Constructor
Movie::Movie(string t, int y, string rate, int run){
    title = t;
    year = y;
    rating = rate;
    runtime = run;
}
//Second empty constructor for array creation
Movie::Movie(){
}


void Movie::setTitle(string t){
    title = t;
}

string Movie::getTitle(){
    return title;
}

void Movie::setYear(int y){
    year = y;
}

int Movie::getYear(){
    return year;
}

void Movie::setRating(string rate){
    rating = rate;
}

string Movie::getRating(){
    return rating;
}

void Movie::setRuntime(int run){
    runtime = run;
}

int Movie::getRuntime(){
    return runtime;
}

void Movie::printMovie(){
    cout << getTitle() << "~~~~~~" << getYear() << "~~~~~~" << getRating() << "~~~~~~" << getRuntime() << endl;
}