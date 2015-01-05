#include <stdio.h>

/************************************ Creating Struct **********************************/

// Structure Color
struct Color {
	unsigned int r;
	unsigned int g;
	unsigned int b;
};

// Structure Person
typedef struct Person Person;

struct Person {
	char* name;
	unsigned int age;
};

void main() {
	
	// Create record without value
	struct Color aux;
	// Initialize values on struct
	aux.r = 0;
	aux.g = 0;
	aux.b = 0;

	// Initialize Struct
	struct Person aux2 = { "Bruce", 28 };

	// Initialize Struct with other parameter order
	struct Person aux3 = { .age = 28, .name = "Bruce" };
	aux3.age = 29;

	// Using pointers and struct
	struct Person* aux4 = &aux3;
	aux4->age = 30;
	
}