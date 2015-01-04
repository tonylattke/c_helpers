#include <stdio.h>

/************************* Example 1 - Create a function and using *********************/

// Even or not
// @number : Number to decide
// @return : True if the number is even, otherwise False
int even(int number){
	return number % 2 == 0;
}

/********************************** Example 2 - Recursion ******************************/

// Factorial of number
// @number : Number
// @return : Factorial value of number
int factorial(int value){
	if (value <= 1)
		return 1;
	return value * factorial(value -1);
}

// Fibonacci
// @value : Number
// @return : Fibonacci value
int fibonacci(value){
	if (value == 0) {
		return 0;
	} else if (value == 1) {
		return 1;
	}
	return fibonacci(value-1)+fibonacci(value-2);
}

/************************************** Function Main **********************************/

void main() {
	// Testing Function even
	int i;
	for (i = 0; i < 10; ++i) {
		if (even(i) != 0) {
			printf("%d - Even\n",i);
		} else {
			printf("%d - Odd\n",i);
		}
	}

	// Testing Function factorial and fibonacci
	int number = 7;
	printf("Factorial of %d is %d\n", number,factorial(number));
	printf("Fibonacci of %d is %d\n", number,fibonacci(number));
}