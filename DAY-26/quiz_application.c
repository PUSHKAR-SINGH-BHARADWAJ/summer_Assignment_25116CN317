#include <stdio.h>
int main() {
    int answer,score = 0;
    printf("QUIZ APPLICATION\n\n");
    printf("1.which city is known as city of dream\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    printf("\n3. jersey number of ronaldo?\n");
    printf("1. 71\n2. 18\n3. 10\n4. 11\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);
    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else if (score == 1)
        printf("Keep Practicing!\n");
    else
        printf("Better Luck Next Time!\n");
   return 0;
}