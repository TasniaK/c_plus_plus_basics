// function that just prints text to the terminal.

// hash sign indicates a directive - imports to preprocess before running code
#include "hello_world.h"
#include <iostream>

/* to def functions, you need:
	type of value returns, void (does not return anything of a type, hence a method not a function)
	name of function, main with parentheses */
void HelloWorld::hello_world()
{
	/* use the display screen as output, cout
		insert something into this display, << */
	std::cout << "Hello World!" << std::endl;
	std::cout << "I'm a C++ program." << std::endl;
	std::cout << "Plus one is '++'." << std::endl;
}
