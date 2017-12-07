#include "stdio.h"
#define MAX_NO_OF_WORDS 25
#define MAXLEN_OF_WORD 20
int main(){
	int c, i, j, flag = 0, nw = 0;
	int words[MAX_NO_OF_WORDS];
	for(i = 0 ; i < MAX_NO_OF_WORDS ; i++){
		words[i] = 0;
	}
	while( (c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			if(!flag){
				nw++;
				flag = 1;
			}
			if(nw >= MAX_NO_OF_WORDS){
				printf("you exceeded the word limit, programme terminated\n");
				return 0;
			}
		}else{
			++words[nw];
			flag = 0;
		}
	}
	for(i = 0 ; i < MAX_NO_OF_WORDS ; i++){
		if(words[i] > MAXLEN_OF_WORD){
			printf("you exceeded the max length of words allowed, programme terminated\n");
			return 0;
		}
	}
	for(i = MAXLEN_OF_WORD ; i>0 ; --i){
		for(j = 0 ; j<=nw ; j++){
			if(i <= words[j]){
				putchar(' ');
				putchar('*');
				putchar(' ');
			}else{
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}