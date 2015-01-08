#ifndef IMPORT_FILE_H
#define IMPORT_FILE_H

// Structure Person
typedef struct Person Person;

struct Person {
	char* name;
	unsigned int age;
};

char* getName(struct Person* p);
unsigned int getAge(struct Person* p);

#endif
