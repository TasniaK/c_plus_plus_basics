// adding two arrays together.

#include "add_arrays.h"
#include <iostream>
#include <array>

using namespace std;

// passing arrays as arguements
// don't pass whole array, pass address of first element
void AddArrays::add_arrays(int argc[], int argv[]) 
{
	int v3[3];

	// print arrays passed in.
	printf("\nArray 1 :\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", argc[i]);

	printf("\nArray 2 :\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", argv[i]);

	// loop through each array and add.
	for (int i = 0; i < 3; i++) {
		// Add here
		v3[i] = argc[i] + argv[i]; // Mind you that this could lead to integer overflow.
	}

	printf("\nResult Arr :\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", v3[i]);
}