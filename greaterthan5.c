#include <stdio.h>

// a program that re-prints all input lines that are longer than 5 characters

int main(){
    int c, currentChar = 0;
    char lineContent[100] = {'\0'}, maxContent[100] = {'\0'};
    while((c = getchar()) != EOF){                                                                              
        if(c != '\n'){
            lineContent[currentChar] = c;
            currentChar++;
        }
        else{
            if(currentChar > 5){
                printf("%s", lineContent);
            }
            currentChar = 0;
            printf("\n");
        }
    }

    return 0;
}