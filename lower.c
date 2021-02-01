#include <stdio.h>

int lower(int c);
int lower_v2(int c);

//Reprint the string with lowecase characters only

int main(void){
    int c, i;
    char s[100];

    for(i=0; (c=getchar()) != '\n'; ++i){
        c=lower_v2(c);
        s[i]=c;
    }
    s[i] = '\0';
    printf("Lower: %s\n", s);

    return 0;
}

int lower(int c){
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int lower_v2(int c){
    return (c>='A' && c<='Z') ? (c + 'a' - 'A') : c;
}