#include <stdio.h>
#define IN 1
#define OUT 0

// a program that writes each word on a new line

int main(){

    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){   /*hello world*/
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT) {
            state = IN;
            ++nw;
            printf("\n");
        }
        if(state == IN)
            putchar(c);
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}