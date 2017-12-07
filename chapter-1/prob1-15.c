#include "stdio.h"

float ftoc(float);

main(){
	float fahr, celsius;
	int i, lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	for(fahr = lower; fahr <= upper; fahr += step){
		celsius = ftoc(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}

float ftoc(float fahr)
{
    float celsius;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}