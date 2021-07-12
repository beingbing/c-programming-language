#include "stdio.h"
#define MAX_CUR_LINE_LENGTH 1000

int get_line(char cur_inp_line[], int max_cur_line_length);
void reverse(char cur_inp_line[]);

main(){
	int cur_line_len;
	char cur_inp_line[MAX_CUR_LINE_LENGTH];

	while((cur_line_len = get_line(cur_inp_line, MAX_CUR_LINE_LENGTH)) > 0){
		reverse(cur_inp_line);
		printf("%s\n", cur_inp_line);
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

void reverse(char cur_inp_line[]){
	int i, j=0;
	char temp;

	for(i=0; cur_inp_line[i] != '\n'; i++){
		;
	}
	--i;

	while(i>j){
		temp = cur_inp_line[i];
		cur_inp_line[i] = cur_inp_line[j];
		cur_inp_line[j] = temp;
		--i;
		++j;
	}
}