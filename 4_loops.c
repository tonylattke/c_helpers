#include <stdio.h>

#define TRUE 1 
#define FALSE 0

void main() {
	
	// While .. then ..
	printf("While\n");
	int i = 1;
	while (i < 5) {
		printf("%d\n", i);
		i++; // i += 1; also works
	}

	// While with function break
	printf("While with break\n");
	i = 5;
	int result = 1;
	while (TRUE) {
		result *= i;
		if (i <= 1) {
			printf("%d\n",result);
			break;
		}
		i--; // i -= 1; also works
	}

	// While with continue
	printf("While with continue\n");
	i = 5;
	result = 1;
	while (result *= i) {
		if (i > 1) {
			i--;
			continue;	
		}
		printf("%d\n",result);
		break;
	}	

	// do .. while
	printf("Do while\n");
	i = 5;
	result = 1;
	do {
		result *= i;
		i--;
	} while (i > 1);
	printf("%d\n",result);
	
	// For
	int x;
	for ( x = 0; x < 5; x++ ) {
		printf("%d\n", x);
	}

}