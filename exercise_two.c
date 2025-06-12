#include <stdio.h>

void guessNumber(int guess) {
    if(guess > 555){
        printf("Your guess is too high.\n");
    }
    else if(guess <555){
        printf("Your guess is too low.\n");
    }
    else{
        printf("Correct. You guessed it!\n");
    }
    //We use void because it isn't returning anything

    // TODO: write your code here
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}