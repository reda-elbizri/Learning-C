#include<stdio.h>
#include<stdlib.h>

int main(){

    int secretNumber = 5;
    int guess, guessCount = 0, guessLimit = 3, outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
         if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else{
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("Out of guesses");
    }
    else{
        printf("You won!");
    }

    return 0;
}