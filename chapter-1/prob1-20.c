#include "stdio.h"
#define TAB_WIDTH 4

main(){
	int no_of_space=0, pos=1, c;
	while((c=getchar()) != EOF){
		if( c=='\t' ){
			no_of_space = TAB_WIDTH - ((pos-1)%TAB_WIDTH);

			while(no_of_space > 0){
				putchar('#');
				++pos;
				--no_of_space;
			}
		}else if(c == '\n'){
			putchar(c);
			pos = 1;
		}else{
			putchar(c);
			++pos;
		}
	}
}