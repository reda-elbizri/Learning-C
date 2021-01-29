#include <stdio.h>
#define tabSpace 8

// a program that counts the number of spaces 
// and finds out the number of spaces left fot the next tab stop

int main(){
    int c, tabSpaces = 0, blanks = 0, left = 0;

    while((c = getchar()) != EOF){
        if(c != '\n' && c != '\t' && c != ' '){
            if(blanks >= 1)
                printf("(%d blanks left fot the next tab stop)", left);
            if(tabSpaces >= 8)
                printf("(%d spaces)", tabSpaces);
            putchar(c);
            tabSpaces = 0;
            blanks = 0;
            left = 0;
        }
        else if(c == '\t')
            tabSpaces += 8;
        else if(c == ' '){
            ++blanks;
            if(blanks == tabSpace){ 
                printf("(%d spaces)", blanks);
                blanks = 0;
                left = 0;
            }
            else{
                left = tabSpace - blanks;
            }
        }
        else if(c == '\n'){
            if(tabSpaces < 8)
                tabSpaces = 0;
            else if(tabSpaces >= 8){
                printf("(%d spaces)", tabSpaces);
                tabSpaces = 0;
            }
            if(blanks < 1) {    
                blanks = 0;
                left = 0;
            }
            else if(blanks >= 1){
                printf("(%d blanks left fot the next tab stop)", left);
                blanks = 0;
                left = 0;
            }
            printf("\n");
        }
    }

    return 0;
}