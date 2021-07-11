// #include "stdio.h"
// main(){
// 	long nc = 0;
// 	while(getchar() != EOF){
// 		++nc;
// 	}
// 	printf("%ld\n", nc);
// }


// version 2
#include "stdio.h"
main(){
	double nc;
	for(nc=0;getchar()!=EOF;++nc){;}
	printf("%.0f\n", nc);
}