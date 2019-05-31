// my first program in C++

// hash sign indicates a directive - imports to preprocess before running code
#include "hello_world.h"
#include <iostream>

/* to def functions, you need:
	type of value returns, int
	name of function, main with parentheses
	main is a special func in C++, it is called when the program is run */
int HelloWorld::hello_world()
{
	/* use the display screen as output, cout
		qualified manner: cout is part of the standard library, hence its namespace is std::cout
		with the qualified manner you need to state the namespace with every use of the function
		unqualified manner: state "using namespace std;", which introduces visibility to the components in std
		so with the unqualified manner after "using" you can now state cout without the "std::" prefix
		insert something into this display, << */
	std::cout << "Hello World!" << std::endl;
	std::cout << "I'm a C++ program." << std::endl;
	std::cout << "Plus one is '++'." << std::endl;
}
