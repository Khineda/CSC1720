#include <iostream>
using namespace std;

int rFibNum(int a, int b, int n) {
	if (n ==1) 
	return a;

	else if (n == 2) 
	return b;

	else 
	return rFibNum(a, b, n - 1) + rFibNum(a, b, n - 2);
}

int main() {
	int fib = rFibNum(1, 2, 5);
	cout << fib << endl;
}