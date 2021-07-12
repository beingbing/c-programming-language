// #include "stdio.h"
// main(){
// 	char c;
// 	c = getchar();
// 	while(c != EOF){
// 		putchar(c);
// 		c = getchar();
// 	}
// }

// 2nd version
// copy input to output
#include <stdio.h>

int main()
{
	int c;
	// single char is represent as int
	while ((c = getchar()) != EOF)
		putchar(c);
	return 0;
}