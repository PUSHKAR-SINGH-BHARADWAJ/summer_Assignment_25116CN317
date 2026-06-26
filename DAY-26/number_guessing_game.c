#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int target, guess;
    srand(time(0));
    target= rand() % 100 + 1;
    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 100.\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess > target) {
            printf("your guess is too high,please try another number\n");
        } else if (guess<target) {
            printf("your guess is too low,please try another number\n");
        } else {
            printf("Congrts, You guessed the correct number: %d\n", target);
        }} while (guess !=target);
   return 0;
}