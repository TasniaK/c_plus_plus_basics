// simple addition function.
#include "addition.h"
#include <iostream>

using namespace std;

int Addition::addition()
{
	int a, b, c;

	cout << "Enter two integers to add\n";
	cin >> a >> b;

	c = a + b;
	cout << "Sum of the numbers: " << c << endl;

	return 0;
}