#include <stdio.h>
void guessNumber(int guess){
    if(guess == 555){
        printf("Correct. You guessed it!\n");
    }
    else if(guess < 555){
        printf("You guess is too low.\n");
    }
    else{
        printf("You guess is too high.\n");
    }
}
int main(){
    guessNumber(600);
    guessNumber(500);
    guessNumber(555);
}