#include <stdio.h>

#include "person.h"

void main() {

	// Use imported structure
	struct Person aux = { "Bruce", 28 };
	char* name = getName(&aux);
	unsigned int age = getAge(&aux);

}