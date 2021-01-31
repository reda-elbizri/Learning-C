#include <stdio.h>

int any(char s1[], char s2[]);

int main(void){
    int c, c2, i, j;
    char str1[100], str2[100];

    //string 1
    for(i=0; (c=getchar()) != '\n'; ++i){
        str1[i] = c;
    }
    str1[i] = '\0';

    //string 2
    for(j=0; (c2=getchar()) != '\n'; ++j){
        str2[j] = c2;
    }
    str2[i] = '\0';

    printf("Location: %d\n", any(str1, str2));

    return 0;
}

//returns the first location in the string s1 where any character from string s2 occurs;
//or -1 if s1 contains no characters from s2
int any(char s1[], char s2[]){
    int x, m, n, found=0;

    for(m=0; s1[m] != '\0' && found == 0; ++m){
        for(n=0; s2[n] != '\0'; ++n){
            if(s2[n] == s1[m]){
                ++found;
                x = m+1; 
                break;
            }
        }
    }
    if(found == 1)
        return x; 
    else
        return -1;
}