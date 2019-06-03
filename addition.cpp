// simple addition function.
#include "addition.h"
#include <iostream>

/* qualified manner: cout is part of the standard library, hence its namespace is std::cout
	with the qualified manner you need to state the namespace with every use of the function
	unqualified manner: state "using namespace std;", which introduces visibility to the components in std
	so with the unqualified manner after "using" you can now state cout without the "std::" prefix*/
using namespace std;

int Addition::addition()
{
	// must declare variable types before use, so that compiler knows how much memory to allocate to it.
	int a, b, c;

	// get inputs, can ask for two inputs within one cin line, using the >> separator.
	cout << "Enter two integers to add\n";
	cin >> a >> b;

	// run calculation
	c = a + b;

	// give back result
	cout << "Sum of the numbers: " << c << endl;

	return 0;
}