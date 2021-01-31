#include<stdio.h>

int main(){
    int c, c2, m, n;
    char str[100];
    char str2[100];

    int squeeze(char s[], int c);
    int squeeze_v2(char s1[], char s2[]);

    for(m=0; (c=getchar()) != '\n'; ++m){
        str[m] = c;
    }
    str[m] = '\0';
    
    for(n=0; (c2=getchar()) != '\n'; ++n){
        str2[n] = c2;
    }
    str2[n] = '\0';
    squeeze_v2(str, str2);
    printf("Squeeze: %s\n", str);

    return 0;
}

// removes all occurences of the character c from the string s
int squeeze(char s[], int c){
    int i, j;
    for(i=j=0; s[i] != '\0'; i++){
        if(s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

// deletes each character in s1 that matches any character in the string s2
int squeeze_v2(char s1[], char s2[]){
    int i, j, k, v, found=0;
    
    for(i=j=0; s1[i] != '\0'; ++i){
        found=0;
        for(k=0; s2[k] != '\0'; ++k){
            if(s2[k] == s1[i] && found == 0){
                ++found;
            }
        }
        if(found == 0){
            s1[j] = s1[i];
            ++j;
        }
    }
    s1[j] = '\0';
}