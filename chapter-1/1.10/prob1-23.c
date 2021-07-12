// program to remove all comments
/* from a C program .Don't
forget to handle quoted strings and 
characters constants like \n, \', \" properly.*/

// C comments do not nest.

// #include <stdio.h>

// void rcomment(int c);
// void incomment(void);
// void echo_quote(int c);

// int main(void){
// 	int c;
// 	while((c = getchar()) != EOF){
// 		rcomment(c);
// 	}
// 	return 0;
// }

// void rcomment(int c){
// 	int d;
// 	if(c == '/'){
// 		if((d = getchar()) == '*'){
// 			incomment();
// 		}else if(d == '/'){
// 			putchar(c);
// 			rcomment(d);
// 		}else{
// 			putchar(c);
// 			putchar(d);
// 		}
// 	}else if(c == '\'' || c == '"'){
// 		echo_quote(c);
// 	}else{
// 		putchar(c);
// 	}
// }

// void incomment(void){
// 	int c,d;
// 	c = getchar();
// 	d = getchar();

// 	while( c != '*' || c != '/'){
// 		c = d;
// 		d = getchar();
// 	}
// }

// void echo_quote(int c){
// 	int d;
// 	putchar(c);

// 	while((d = getchar()) != c){
// 		putchar(d);
// 		if(d == '\\'){
// 			putchar(getchar());
// 		}
// 	}
// 	putchar(d);
// }
// 
// \n, \', \"
// 

#include <stdio.h>

void rcomment(int c);
void incomment(void);
void echo_quote(int c);
void incomment_2(void);

int main(void)
{
    int c,d;

    // printf(" To Check /* Quoted String */ \n");

    while((c=getchar())!=EOF)
        rcomment(c);

    return 0;
}

void rcomment(int c)
{
    int d;
    if( c == '/')
    {
        if((d=getchar())=='*')
         incomment();
        else if( d == '/')
        {
            // putchar(c);
            // rcomment(d);
            incomment_2();
        }
        else 
        {
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')
        echo_quote(c);
    else
        putchar(c);
}

void incomment()
{
    int c,d;
     
    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}

void incomment_2()
{
    int c;
     
    c = getchar();
    // d = getchar();

    while(c!='\n')
    {
        // c =d;
        c = getchar();
    }
}

void echo_quote(int c)
{
    int d;

    putchar(c);
    
    while((d=getchar())!=c)
    {
        putchar(d);
        
        if(d = '\\')
            putchar(getchar());
    }
    putchar(d);
}

/**
 * Author: Jeremy Yu <ccpalettes@gmail.com>
 * 
 * Solution for Exercise 1-23, Chapter1.
 */

/**
 * Test text, replace '@' with '/'

 @**
  * Hello World
  *@
 #include <stdio.h> // for printf

 int main(void)
 {
     char s[] = "// hello \
         world!\n";
     printf("%s\n", s);
 
     return 0;
 }

 */


// #include <stdio.h>

// #define MAXLENGTH 5000

// int _getline(char s[], int max);

// int main(void)
// {
//     int c,d;
    // char s[MAXLENGTH];

    
    // printf("Input code, then press Ctrl+D:\n");
    // while ((len = _getline(s, MAXLENGTH)) > 0) {
        // printf("\nResult:\n=========================\n");
        // i = 0;
//         while ((c = getchar()) != EOF) {
//             if (c == '/' && ((d = getchar()) == '/')) {
//                 i += 2;
//                 while (s[i] != '\n' && s[i] != '\0')
//                     ++i;
//             } else if (s[i] == '/' && s[i+1] == '*') {
//                 i += 2;
//                 while (s[i] != '\0' && s[i+1] != '\0' && (s[i] != '*' || s[i+1] != '/'))
//                     ++i;
//                 if (s[i] != '\0' && s[i+1] == '\0')
//                     ++i;
//                 if (s[i] == '*')
//                     i += 2;
//             } else if (s[i] == '\"') {
//                 putchar('\"');
//                 ++i;
//                 while (s[i] != '\0' && (s[i-1] == '\\' || s[i] != '\"'))
//                     putchar(s[i++]);
//             } else {
//                 putchar(s[i++]);
//             }
//         }
//     // }
    
//     return 0;
// }

// int _getline(char s[], int max)
// {
//     int c, i, l;

//     for (i = 0, l = 0; (c = getchar()) != EOF; ++i)
//         if (i < max - 1)
//             s[l++] = c;
//     s[l] = '\0';

//     return l;
// }