#include "stdio.h"
#define TAB_WIDTH 4

main(){
	int no_of_space=0, no_of_tabs=0, pos, c;
	
	for(pos=1; (c=getchar())!=EOF; ++pos){
	
		if(c == ' '){
	
			if((pos % TAB_WIDTH) != 0){
	
				++no_of_space;
	
			}else{
				
				++no_of_tabs;
				no_of_space = 0;
			}
		}else{
			for( ; no_of_tabs>0; --no_of_tabs){
				putchar('\t');
			}
			if( c=='\t'){
				no_of_space=0;
			}else{
				for( ; no_of_space>0; --no_of_space){
					putchar(' ');
				}
			}
			putchar(c);
			if(c=='\n'){
				pos=0;
			}else if(c=='\t'){
				pos = pos + ( TAB_WIDTH - (pos-1) % TAB_WIDTH) - 1;
			}
		}
	}
}