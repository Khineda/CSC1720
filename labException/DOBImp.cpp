/********************************************************************** 

* File Name: DOBImp.cpp

* Programmer: Kinsey Van Wingerden

* Course: CSC1720 Section 2

* Date: 3/13/2025

* Path: /home/students/jvanwing/CSC1720/labException/DOBImp.cpp

* Description: This is the implementation file for the class DOB for the DOBTest.cpp program

* Additional Files: DOB.h DOBImp.cpp DOBTest.cpp InvalidDay.h  InvalidMonth.h 

* Help Recieved: Gio Kennedy

* Compile: g++ DOBImp.cpp DOBTest.cpp -o DOBTest.out

* Run: ./DOBTest.out

* Additional Comments: Print function was modfied to work with a class instead of direct input

***********************************************************************/

#include "DOB.h"
#include "InvalidMonth.h"
#include "InvalidDay.h"

#include <iostream>

using namespace std;


DOB::DOB()
{
    day = 0;
    month = 0;
    year = 0;
}

int DOB::enterYear()
{
    bool done = false;
    string error1 = "Year can not be less than 1582.";
    string error2 = "Year can not be negative.";

    do
    {
        try
        {
            cout << "Enter the year of birth: ";
            cin >> year;
            cout << endl;
            if (year < 1582)
            {
                throw error1;
            }
            else if (year < 0)
            {
                throw error2;
            }
            else
            {
                done = true;
            }
        }
        catch (string error1)
        {
            cout << error1 << endl;
        }
        catch (string error2)
        {
            cout << error2 << endl;
        }
    } 
    while(!done);
    return year;
}

int DOB::enterMonth()

{
    bool done = false;
    do
    {
        try
        {
            cout << "Enter the month(1-12): ";
            cin >> month;
            cout << endl;
            if(month < 1 || month > 12)
            {
                throw InvalidMonth();
            }
    
            else
            {
                done = true;
            }
    
        }
        catch(InvalidMonth e)
        {
            if(month < 1)
            {
                cout << e.getError1() << endl;
            }
    
            else
            {
                cout << e.getError2() << endl;
            }
        }
    
    } while (!done);
    return month;

}

int DOB:: enterDay(int mth, int yr)
{

    bool done = false;
    do
    {
        try
        {
            cout << "Enter the day(Consider leap years and amount of days in selected month): ";
            cin >> day;
            cout << endl;
            if(month % 2 == 0 && month != 2 && day > 30 || day < 1)
            {
                throw InvalidDay();
            }

            else if(month % 2 != 0 && month != 2 && day > 31 || day < 1)
            {
                throw InvalidDay();
            }

            else if(month == 2 && isLeapYear(year) && day > 29 || day < 1)
            {
                throw InvalidDay();
            }

            else if(month == 2 && !isLeapYear(year) && day > 28 || day < 1)
            {
                throw InvalidDay();
            }

            else
            {
                done = true;
            }

        }
        catch(InvalidDay e)
        {
            if(month % 2 == 0 && month != 2 && day > 30 || day < 1)
            {
                cout << e.getError1() << endl;
            }

            else if(month % 2 != 0 && month != 2 && day > 31 || day < 1)
            {
                cout << e.getError2() << endl;
            }

            else if(month == 2 && isLeapYear(year) && day > 29 || day < 1)
            {
                cout << e.getError3() << endl;
            }

            else
            {
                cout << e.getError4() << endl;
            }
        }

    } while (!done);
    return day;
}

bool DOB::isLeapYear(int yr)
{
    return (yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0);
}


void DOB::printBirthDate()
{
    if(month == 1)
    {
        cout << "Birth Day: January " << day << ", " << year << endl;
    }

    else if(month == 2)
    {
        cout << "Birth Day: February " << day << ", " << year << endl;
    }

    else if(month == 3)
    {
        cout << "Birth Day: March " << day << ", " << year << endl;
    }

    else if(month == 4)
    {
        cout << "Birth Day: April " << day << ", " << year << endl;
    }

    else if(month == 5)
    {
        cout << "Birth Day: May " << day << ", " << year << endl;
    }

    else if(month == 6)
    {
        cout << "Birth Day: June " << day << ", " << year << endl;
    }

    else if(month == 7)
    {
        cout << "Birth Day: July " << day << ", " << year << endl;
    }

    else if(month == 8)
    {
        cout << "Birth Day: August " << day << ", " << year << endl;
    }

    else if(month == 9)
    {
        cout << "Birth Day: September " << day << ", " << year << endl;
    }

    else if(month == 10)
    {
        cout << "Birth Day: October " << day << ", " << year << endl;
    }

    else if(month == 11)
    {
        cout << "Birth Day: November " << day << ", " << year << endl;
    }

    else if(month == 12)
    {
        cout << "Birth Day: December " << day << ", " << year << endl;
    }
}

