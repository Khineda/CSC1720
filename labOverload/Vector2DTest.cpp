/********************************************************************** 

* File Name: Vector2DTest.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/6/2025

* Path: /home/students/jvanwing/CSC1720/labOverload/Vector2DTest.cpp

* Description: This is the testing file for the Vector2D class

* Compile: g++ Vector2DImp.cpp Vector2DTest.cpp -o Vector2DTest.out

* Run: ./Vector2DTest.out

* Additional Files: Vector2D.h Vector2DImp.cpp Vector2DTest.cpp

* Help Recieved: 

***********************************************************************/

#include "Vector2D.h"
#include <iostream>

using namespace std;

int main()
{
    //Vector 1
    Vector2D v1(1, 2);
    cout << "Vector 1: ";
    v1.display();
    cout << endl;
    //Vector 2
    Vector2D v2(3, 4);
    cout << "Vector 2: ";
    v2.display();
    cout << endl;

    //Used for math operations, when v1 +-*+= v2
    Vector2D v3(0, 0);

    //Math operations

    //Addition
    v3 = v1 + v2;
    cout << "Vector 1 + Vector 2: ";
    v3.display();

    //Subtraction
    v3 = v1 - v2;
    cout << "Vector 1 - Vector 2: ";
    v3.display();

    //Multiplication
    v3 = v1 * 2;
    cout << "Vector 1 * 2: ";
    v3.display();

    //Addition assignment
    v1 += v2;
    cout << "Vector 1 += Vector 2: ";
    v2.display();
    
    //Equality check
    if(v1 == v2)
    {
        cout << "The vectors are equal" << endl;
    }
    else
    {
        cout << "The vectors are not equal" << endl;
    }

    //Magnitude
    cout << "Magnitude of Vector 1: " << v1.magnitude() << endl;

    return 0;
}