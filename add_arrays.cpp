// adding two arrays together.

#include "add_arrays.h"
#include <iostream>
#include <array>

using namespace std;

// passing arrays as arguements
// don't pass whole array, pass address of first element
void AddArrays::add_arrays(int argc[], int argv[]) {
	int v1[3], v2[3], v3[3];

	for (int i = 0; i < 3; i++) {
		printf("Type a number for v1 :\t");
		scanf_s("%d", &v1[i]);

		printf("Type a number for v2 :\t");
		scanf_s("%d", &v2[i]);
		// Add here
		v3[i] = v1[i] + v2[i]; // Mind you that this could lead to integer overflow.
	}

	printf("\nResult Arr :\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", v3[i]);
}