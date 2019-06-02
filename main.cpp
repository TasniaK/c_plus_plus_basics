// my first program in C++

// hash sign indicates a directive - imports to preprocess before running code
#include "hello_world.h"
#include "addition.h"
#include <iostream>

/* to def functions, you need:
	type of value returns, int
	name of function, main with parentheses
	main is a special func in C++, it is called when the program is run */
int main()
{
	HelloWorld h1 = HelloWorld();
	h1.hello_world();

	Addition a1 = Addition();
	a1.addition();

	return 1;
}
