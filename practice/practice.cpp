

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


template <class type>
type funcExp(type list[], int size)
{
type x = list[0];
type y = list[size - 1];
for (int j = 1; j < size - 1; j++)
{
if (x < list[j])
x = list[j];
if (y > list[size - 1 - j])
y = list[size - 1 - j];
}
return x;
}

double sales[7] = {280.50, 320.00, 56.00, 78.90, 300.00,100.00, 250.00};

string names[] = {"Mike", "Lisa", "Nancy", "Robinson","Miller", "Sam"};

int main() {
	cout << funcExp(sales, 7) << endl;

	cout << funcExp(names, 6) << endl;

	return 0;
}
