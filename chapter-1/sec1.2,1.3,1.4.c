// #include "stdio.h"
// main(){
// 	int fahr, celsius, lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while(upper>=fahr){
// 		celsius = 5 * (fahr - 32) / 9;
// 		printf("%d\t%d\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// to make output pretty, let's right justify it, for this, augment %d with a width
// #include "stdio.h"
// main(){
// 	int fahr, celsius, lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while(upper>=fahr){
// 		celsius = 5 * (fahr - 32) / 9;
// 		printf("%3d\t%4d\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// making decimal values legit
// #include "stdio.h"
// main(){
// 	float fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while(upper>=fahr){
// 		celsius = 5 * (fahr - 32) / 9;
// 		printf("%3.0f\t%6.3f\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// same function with for statement
// #include "stdio.h"
// main(){
// 	float fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	printf("fahr\tcelsius\n");
// 	for(;fahr <= upper; fahr += step){
// 		celsius = 5 * (fahr - 32) /9;
// 		printf("%3.0f\t%6.2f\n", fahr, celsius);
// 	}
// }


// same function with #define
#include "stdio.h"
#define LOWER 0
#define UPPER 300
#define STEP 20
main(){
	float fahr;
	printf("fahr\tcelsius\n");
	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3.0f\t%6.2f\n", fahr, 5*(fahr - 32)/9);
	}
}