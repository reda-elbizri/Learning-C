#include <stdio.h>

int strlen(char s[]);

int main(){
    int x;
    char str[] = {"Hello World"};

    // return the length of a string
    x = strlen(str);
    printf("The length of the string is: %d", x);

    return 0;
}

int strlen(char s[])
{
    int i;
    i = 0;
    while(s[i] != '\0'){
        ++i;
    }
    return i;
}