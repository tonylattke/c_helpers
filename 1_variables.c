#include <stdio.h>

void main() {

	/*************************** Printing Variables **************************/
	// Using Strings
	char* foo = "World";
	printf("Hello %s\n", foo);

	// Using numbers
	int minutes = 60;
	printf("1 Hour have %d minutes.\n", minutes);

	// Using Floating point numbers
	float celcius   = 0;
	float farenheit = 32 + celcius*(9.0/5);
	printf("%f Celcius are %f Farenheit grades\n",celcius,farenheit);

	// Using Double floating point numbers with fixed amount digits of the right
	// Only the first 5 first digits of phi will be showed with %.5f
	double phi   = 1.618033988749894848;
	printf("The golden ratio %.15f\n", phi);

	// Representation Hexadecimal of numbers on lowercase (uppercase use %X)
	int red 	= 0xFF0000;
	int green 	= 0x00FF00;
	int blue	= 0x0000FF;
	printf("Hexadecimal code of:\nRed is: %x \nGreen is: %x \nBlue is: %x\n",red,green,blue);

	// Print text with multiline string
	printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Phasellus mattis ac tortor sed fringilla. Etiam aliquam\
turpis sit amet nisi molestie, nec accumsan massa tempus\n");
	
}