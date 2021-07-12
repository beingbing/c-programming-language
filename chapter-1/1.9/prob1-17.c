#include "stdio.h"
#define MAX_CUR_LINE_LENGTH 1000
#define MAXLEN_CAP 80

int get_line(char cur_inp_line[], int max_cur_line_length);

main(){
	int cur_line_len;
	char cur_inp_line[MAX_CUR_LINE_LENGTH];
	while((cur_line_len = get_line(cur_inp_line, MAX_CUR_LINE_LENGTH)) > 0){
		if(cur_line_len > MAXLEN_CAP){
			printf("%s\n", cur_inp_line);
		}
	}
}

int get_line(char cur_inp_line[], int max_cur_line_length){
	
	int c, i;
	
	for(i=0; i<MAX_CUR_LINE_LENGTH-1 && (c=getchar()) != EOF && c != '\n'; ++i){
	
		cur_inp_line[i] = c;
	
	}
	
	if(c == '\n'){
	
		cur_inp_line[i] = c;
		++i;
	
	}
	
	cur_inp_line[i] = '\0';
	return i;
}