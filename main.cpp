// main.cpp, my first program in C++.

#include "hello_world.h"
#include "addition.h"
#include "add_arrays.h"
#include <iostream>

/* main.cpp instantiates the classes from header files (called when the program is run).
	header files declare functions.
	functions defined in other .cpp files. */
int main()
{
	// when instantiating a class, the instance must also have a fixed type.
	// here this is of type HelloWorld, so it must be an object of this class only.
	HelloWorld h1 = HelloWorld();
	h1.hello_world();

	Addition a1 = Addition();
	a1.addition();

	AddArrays aa = AddArrays();
	int n[3] { 1, 2, 3 };
	int m[3]{ 10, 20, 30 };
	aa.add_arrays(n, m);
	return 1;
}
