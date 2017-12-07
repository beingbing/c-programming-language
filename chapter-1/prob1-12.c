#include "stdio.h"
#define YES 1
#define NO 0
main(){
	int c, newline_started;
	newline_started = NO;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(!newline_started){
				printf("\n");
				newline_started = YES;
			}
		}else{
			putchar(c);
			newline_started = NO;
		}
	}
}