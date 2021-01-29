#include <stdio.h>

// a program that reverses the input a line at a time

int reverse(char s[], int m);

int main(){
    int c, index = 0, max = 0;
    char normalString[100] = {'\0'};
    while((c = getchar()) != EOF){                                                                        
        if(c != '\n' && c != '\t'){
            normalString[index] = c;
            ++index;
        }
        if(c == '\n'){
            max = index-1;
            reverse(normalString, max);
            index = 0;
        }
    }
    return 0;
}

int reverse(char s[], int m){
    printf("Reversed String: ");
    for(int i = m; i >= 0; i--){
        printf("%c", s[i]);
    }
    printf("\n");
}