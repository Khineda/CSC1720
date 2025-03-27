// Biggest1.cpp
#include<iostream>
using namespace std;
// Function prototypes
int biggest(int a, int b);
double biggest(double a, double b);
string biggest(string a, string b);
int main()
{
    int x = biggest(3, 8);
    cout << x << endl;
    double y = biggest(4.3, 2.5);
    cout << y << endl;
    string z = biggest("muffins", "waffles");
    cout << z << endl;
    return 0;
}

int biggest(int a, int b)
{
    if(a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double biggest(double a, double b)
{
    if(a >= b)
    {   
        return a;
    }
    else
    {
        return b;
    }
}

string biggest(string a, string b)
{
    if(a.length() >= b.length())
    {
        return a;
    }
    else
    {
        return b;
    }
}