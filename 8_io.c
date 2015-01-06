#include <stdio.h>

void main() {
	/*********************************** Input reading *********************************/
	
	char name[100];

	printf("Introduce the file name: ");
	scanf("%s", &name);
	
	/************************************ Create file **********************************/
	
	FILE* file = fopen(name, "w");

	// Write the text
	fprintf(file, "test on file\n");
	fprintf(file, "second text\n");
	
	// Close the file
	fclose(file);
	
	/************************************* Read file ***********************************/

	file = fopen(name, "r");

	// Read all lines
	char line[100]; 
	while ( fgets( line, 100, file ) != NULL ) { 
		printf("%s", line); 
	}

	// Reset the seek (position 0 on file)
	rewind(file);

	// Read the file from the begining	
	while ( fgets( line, 100, file ) != NULL ) { 
		printf("%s", line); 
	}
	
	// Close the file
	fclose(file);
}