#include <stdio.h>

int main(){
    int c, currentLine = 0, maxLine = 0;
    char currentContent[100] = {'\0'}, maxContent[100] = {'\0'};

    while((c = getchar()) != EOF){
        if(c != '\n'){
            currentContent[currentLine] = c;
            currentLine++;
        }
        else{
            if(currentLine > maxLine){
            maxLine = currentLine;
            // update the arrays
                for(int i=0; i<100; i++)
                    maxContent[i] = currentContent[i];
            }
            currentLine = 0;
        }
    }
    printf("The longest line has %d characters, it is: %s\n", maxLine, maxContent);

    return 0;
}