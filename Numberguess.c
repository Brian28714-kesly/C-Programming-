/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program for guessing numbers
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//input type
    int secret, guess, attempts = 0;
    srand(time(0));
    secret = rand() % 20 + 1;  // random number between 1 and 20

    printf("Guess the number (between 1 and 20):\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess > secret)
            printf("Too high!\n");
        else if(guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }
    return 0;
}