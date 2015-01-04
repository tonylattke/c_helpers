#include <stdio.h>

#include <stdlib.h>
#include <string.h>

void main() {

	// Commpare Values
	int aux = 23;
	int equal 			= aux == 42;
	int not_equal 		= aux != 42;

	int less_than 		= aux < 42;
	int more_than 		= aux > 42;
	int less_equal_than	= aux <= 42;
	int more_equal_than	= aux >= 42;

	int operator_or		= aux < 23 || aux > 42;
	int operator_and	= aux < 23 && aux > 42;	
	
	// If .. then .. else ..
	int number = 23;
	if (number == 23) {
		printf("Number is 23\n");
	} else {
		printf("Number is not 23\n");
	}

	// If .. then .. else if .. then .. else ..
	char name1[] = "Tony";
	char name2[] = "Enrique";
	char name[]  = "Heinrich";
	if (strcmp(name,name1) == 0) {
		printf("It is Tony\n");
	} else if (strcmp(name,name2) == 0) {
		printf("It is Enrique\n");
	} else {
		printf("It\'s not Tony or Enrique\n");
	}

}