// quizGrades.cpp



// Preprocessor directives

#include<iostream>

#include "InvalidGrade.h"

using namespace std;



// Prototypes

int enterGrade();



// main() function

int main()

{

  int grade = 0;

  cout << "Enter a quiz grade (0-10): ";

  grade = enterGrade();

  cout << "You entered: " << grade << endl;

  cout << "The program may continue." << endl;

  return 0;

}



// enterGrade() function

int enterGrade()

{

  int g = 0;

  try

  {

    cin >> g;

    if(g < 0 || g > 10)

    {

      throw InvalidGrade();

    }

    cout << "Grade entered" << endl;

    return g;

  }

  catch(InvalidGrade e)

  {

    cout << e.what() << endl;

  }

  return -1;

}