/********************************************************************** 

* File Name: Movie.h

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 2/6/2025

* Path: /home/students/jvanwing/CSC1720/lab3/Movie.h

* Description: This is the header file containing the class for the Movie.cpp program

* Compile: g++ Movie.cpp MoviePartA.cpp -o MoviePartA.out

* Execute: ./MoviePartA.out

* Additional Files: Movie.cpp

* Help Recieved: 

***********************************************************************/ 
//Header Guards
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>


using namespace std;
//setup Class

class Movie{

    private:
        string title;
        int year;
        string rating;
        int runtime;
    public:
        Movie(string t, int y, string rate, int run);
        Movie();
        void setTitle(string t);
        string getTitle();
        void setYear(int y);
        int getYear();
        void setRating(string rate);
        string getRating();
        void setRuntime(int run);
        int getRuntime();
        void printMovie();
};


#endif