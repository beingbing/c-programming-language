#include "stdio.h"
#define TNOCHAR 26
main(){
	int c, i, j, freq_arr[TNOCHAR];
	for(i=0;i<TNOCHAR;i++){
		freq_arr[i]=0;
	}
	while((c=getchar()) != EOF){
		if(c>=65 && c<90){
			++freq_arr[c];
		}
	}
	for(i=0;i<TNOCHAR;i++){
		putchar(i);
		for(j=0;j<freq_arr[i];j++){
			putchar('*');
		}
		putchar('\n');
	}
}