#include <stdio.h>

// a program that re-prints lines without spaces 

int main(){

    int c, spaces;
    c = getchar();
    spaces = 0;
    while(c != EOF){
        if((c == ' ') && (spaces < 1)){
            putchar(c);
            ++spaces;
        }
        else{
            if(c != ' '){
                putchar(c);
            }
        }
        c = getchar();
    }

    return 0;
}