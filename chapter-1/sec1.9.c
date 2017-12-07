#include "stdio.h"
#define MAX_CUR_LINE_LENGTH 1000

int get_line(char cur_inp_line[], int max_cur_line_length);
void copy(char to[], char from[]);

main(){
	
	int cur_line_len, max_len_seen_till;
	char cur_inp_line[MAX_CUR_LINE_LENGTH], longest_line_till[MAX_CUR_LINE_LENGTH];
	
	max_len_seen_till = 0;
	
	while((cur_line_len = get_line(cur_inp_line, MAX_CUR_LINE_LENGTH)) > 0){
	
		if(cur_line_len > max_len_seen_till){
	
			max_len_seen_till = cur_line_len;
			copy(longest_line_till, cur_inp_line);
	
		}
	}
	
	if(max_len_seen_till > 0){
	
		printf("%s\n", longest_line_till);
	
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

void copy(char to[], char from[]){
	int i;
	i=0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}