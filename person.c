#include "person.h"

char* getName(struct Person* p) {
	return p->name;
}

unsigned int getAge(struct Person* p) {
	return p->age;
}