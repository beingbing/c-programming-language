#include "stdio.h"
main(){
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = upper;
	while(lower<=fahr){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr - step;
	}
}