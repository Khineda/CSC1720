// DivTest2.cpp
#include<iostream>
using namespace std;
int main()
{
double a = 0;
double b = 0;
double c = 0;
cout << "Enter a value for a: ";
cin >> a;
cout << "Enter a value for b: ";
cin >> b;
try
{
if(b == 0)
{
throw 0;
}
if(a < 0 || b < 0)
{
throw string("a and b must be positive.");
}
c = a / b;
cout << a << " / " << b << " = " << c << endl;
}
catch(int n)
{
cout << "The value for b is zero. That's not allowed";
}
catch(string s)
{
cout << s << endl;
}
return 0;
}
