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
#include "stdio.h"
main(){
	char c;
	while((c = getchar()) != EOF){
		putchar(c);
	}
}