#include <stdio.h>

void main() {

	/************************************* Pointers ************************************/
	
	float value1 = 3.1416;
	float *pi = &value1;
	printf("PI number is %f\n", *pi);

	/************************************* Arrays **************************************/

	// Empty Array with 3 slots
	int empty_array[3];
	// Other way of declaration
	int* empty_array2 = malloc(3*sizeof(int));

	// Insert elements on array
	empty_array[0] = 1;
	empty_array[1] = 2;
	empty_array[2] = 3;

	// Array loaded
	int lost[] = {4, 8, 15, 16, 23, 42};

	// Length of array
	printf("Lost numbers are only %d numbers\n", (int) (sizeof(lost) / sizeof(int)));

	// Concat
	int array1[3] = { 1, 2, 3 };
	int array2[7] = { 4, 5, 6, 7, 8, 9, 10 };
	int* array_total = malloc(10 * sizeof(int));
	memcpy(array_total,     array1, 3 * sizeof(int));
	memcpy(array_total + 3, array2, 7 * sizeof(int));

	// Access to diferents elements
	int squares[] = { 1, 4, 9, 16, 36 };
	int a = squares[0];

	// Change value of element on array
	squares[4] =25;

	// Array inside array
	int* array3[] = { array1, array2 };

	// Delete array
	//free(squares); Check

	/********************************* Arithmetic Conversions **************************/

	long double long_double;
	double normal_double;
	float normal_float;
	unsigned long long uns_l_l;
	long long l_l;
	unsigned long uns_l;
	long l;
	unsigned int uns_i;
	int i;

}