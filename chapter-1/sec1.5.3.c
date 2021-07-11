#include "stdio.h"
main(){
	int c, nl = 0;
	while((c=getchar()) != EOF){
		if(c == '\n'){
			++nl;
		}
	}
	printf("number of lines are %d\n", nl+1);
}