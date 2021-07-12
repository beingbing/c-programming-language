#include "stdio.h"
main(){
	int c, sp = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			if(!sp){ // if this is the first space then let it print and change the flag
				sp = 1;
				putchar(c);
			}
		}else{
			sp = 0; // if all the continues spaces are read(whether they are present or not) then reset the flag
			putchar(c);
		}
	}
}