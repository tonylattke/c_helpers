#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {
	/************************************** Datetime ***********************************/

	// Now
	time_t tm  = time(NULL);
	char* c_time_string = ctime(&tm);
	printf("%s", c_time_string);

	// Now - 2 Hours
	time_t two_hours  = time(NULL) - 2 * 60 * 60;
	char* c_time_string2 = ctime(&two_hours);
	printf("%s", c_time_string2); 

	/**************************************  Math **************************************/

	// Elemental numbers
	float aux_pi = M_PI;
	float aux_exp = exp(1);
	float phi = (1 + sqrt(5))/2;

	int x = 10;

	//  It's a number
	if (isdigit(x) == 0) {
		printf("Is a number\n");
	} else {
		printf("Is not a number\n");
	}
	// We also have isalpha

	float res_round = round(10);	// Round x

	float res_exp = exp(10); 		// e to the power of x

	float res_log = log(10); 		// Default base e log(x)/log(10)

	float res_sqrt = sqrt(10);

	float res_sin = sin(10);
	float res_cos = cos(10);
	float res_tan = tan(10);

	/************************************** Random *************************************/

	srand(time(0));
	int rand_value = rand();  // Number between 0 and RAND_MAX
	printf("%d\n", rand_value);

	// Random number betwen 0 and 1
	double rand_0_1 =(double)rand() / (double)RAND_MAX;

	int lost[] = { 4, 8, 15, 16, 23, 42 };

	// Random member of array
	int value_lost = lost[rand() % 6];
	printf("%d\n", value_lost);

	// Random int on range
	int range = 50;
	int minimum = 100;
	int random_number = rand() % range + minimum;
	
}