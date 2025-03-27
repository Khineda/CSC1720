// InvalidGrade.h

#ifndef INVALIDGRADE_H

#define INVALIDGRADE_H



#include<iostream>

using namespace std;



class InvalidGrade

{

  private:

  string message = "";



  public:

  InvalidGrade()

  {

    message = "The value entered is not in the range 0-10";

  }



  string what()

  {

    return message;

  }

};

#endif