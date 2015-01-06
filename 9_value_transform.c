#include <stdio.h>

int charCToInt(char* v){
	char* valor = (char*) v;
	return atoi(valor);
}

float charCToFloat(char* v){
	char* valor = (char*) v;
	return atof(valor);
}

double charCToDouble(char* v){
	double d;
	char* valor = (char*) v;
	sscanf(valor,"%lf",&d);
	return d;
}

void main() {
	
	/*********************************** Value to String *********************************/

	// Integer
	int i_value  = 42;
	char s_i_value[15];
	sprintf(s_i_value, "%d", i_value);

	// Float
	float f_value  = 42.0;
	char s_f_value[15];
	sprintf(s_f_value, "%f", f_value);

	/*********************************** String to Value *********************************/

	// Integer
	i_value = charCToInt("42");

	// Float
	f_value = charCToFloat("42.0");

	// Double
	float d_value = charCToDouble("42.0");

}