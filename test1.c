#include <stdio.h>
#include <string.h> 

void askQuestion(const char *question, const char *correctAnswer) 
{
    char userAnswer[100]; 

    printf("%s\n", question);
    printf("Your answer: ");
    fgets(userAnswer, sizeof(userAnswer), stdin); 

    userAnswer[strcspn(userAnswer, "\n")] = 0;

    if (strcasecmp(userAnswer, correctAnswer) == 0) {
        printf("Correct!\n\n");
    } 
    else 
    {
        printf("Incorrect. The correct answer was: %s\n\n", correctAnswer);
    }
}

int main() 
{
    askQuestion("What is the capital of France?", "Paris");
    askQuestion("Which planet is known as the Red Planet?", "Mars");
    askQuestion("What is 2 + 2?", "4");

    return 0;
}
