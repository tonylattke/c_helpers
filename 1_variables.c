#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

char* concat_chars(char* a, char* b){
	int newSize = strlen(a)  + strlen(b) + 1; 

	// Allocate new buffer
	char * newBuffer = (char *)malloc(newSize);

	// do the copy and concat
	strcpy(newBuffer,a);
	strcat(newBuffer,b); // or strncat

	return newBuffer;
}

char* replace_char(char* str, char find, char replace) {
	int size = strlen(str);
	char ret[size];
	int i = 0;
	while (i < size) {
		if (str[i] == find){
			ret[i] = replace;
		} else {
			ret[i] = str[i];
		}
		++i;
	}
	ret[size] = '\0';
	return ret;
}

// void replace_char(char* str, char find, char replace) {
// 	int size = strlen(str);
// 	int i = 0;
// 	while (i < size) {
// 		if (str[i] == find){
// 			str[i] = replace;
// 		}
// 		++i;
// 	}
// }

char* sub_string(char* str, int init, int end) {
	// Range must be positive, 0 <= init <= end <= length of str
	int size = end-init;
	char ret[size];
	int i = 0;
	while (i < size){
		ret[i] = str[init + i];
		i++;
	}
	ret[size] = '\0';
	return ret;
}

char* sub_string_till(char* str, int end) {
	// Range must be positive, 0 <= end <= length of str
	int size = end;
	char ret[size];
	int i = 0;
	while (i < size){
		ret[i] = str[i];
		i++;
	}
	ret[size] = '\0';
	return ret;
}

char* sub_string_from(char* str, int init) {
	// Range must be positive, 0 <= init <= length of str
	int size = strlen(str)-init;
	char ret[size];
	int i = 0;
	while (i < size){
		ret[i] = str[init + i];
		i++;
	}
	ret[size] = '\0';
	return ret;
}

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

	/************************** Operating Variables **************************/
	// Numbers
	int p_foo = 23;
	int p_bar = 19;
	int p_baz = p_foo + p_bar; // Plus
	printf("%d + %d is: %d\n",p_foo,p_bar,p_baz);

	int m_foo = 69;
	int m_bar = 27;
	int m_baz = m_foo - m_bar; // Minus
	printf("%d - %d is: %d\n",m_foo,m_bar,m_baz);

	int mu_foo = 7;
	int mu_bar = 6;
	int mu_baz = mu_foo * mu_bar; // Multiply
	printf("%d * %d is: %d\n",mu_foo,mu_bar,mu_baz);

	int d_foo = 420;
	int d_bar = 10;
	int d_baz = d_foo / d_bar; // Divide
	printf("%d / %d is: %d\n",d_foo,d_bar,d_baz);

	int mo_foo = 429;
	int mo_bar = 43;
	int mo_baz = mo_foo % mo_bar; // Module
	printf("%d mod %d is: %d\n",mo_foo,mo_bar,mo_baz);

	double po_foo = 6.48074069840786;
	int   po_bar = 2;
	double po_baz = pow(po_foo,po_bar); //Pow
	printf("%f to the power of %d is: %f\n",po_foo,po_bar,po_baz);

	// Strings
	char* s_foo = "C ";
	char* s_bar = "Works";
	char* s_baz = concat_chars(s_foo,s_bar);
	printf("%s\n",s_baz);

	// Simple character
	char c_foo = 'T';
	printf("%c\n",c_foo);

	char* r_foo = "Lorem ipsum dolor sit amet";
	char* r_bar = replace_char(r_foo,' ', '_'); // Replacing spaces by _
	printf("%s\n",r_bar);
	
	// Other method to replace
	// char r_foo[40];
	// strcpy(r_foo, "Lorem ipsum dolor sit amet");
	// replace_char(r_foo,' ', '_');
	// printf("%s\n",r_foo);

	char* a_foo = "Lorem ipsum dolor sit amet";
	printf("%c\n", a_foo[0]); // First char on string "Lorem ipsum dolor sit amet"
	printf("%s\n", sub_string(a_foo,6,12)); // 6 till 12 chars on string "Lorem ipsum dolor sit amet"
	printf("%s\n", sub_string_till(a_foo,5)); // First 5 chars on string "Lorem ipsum dolor sit amet"
	printf("%s\n", sub_string_from(a_foo,6)); // 6 till the end chars on string "Lorem ipsum dolor sit amet"
}