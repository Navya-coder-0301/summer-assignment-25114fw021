//quiz application
#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("=================================\n");
    printf("      WELCOME TO C QUIZ APP      \n");
    printf("=================================\n");

    // Question 1
    printf("\nQ1. Capital of India is:\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Chennai\n");
    printf("4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;
    else
        printf("Correct Answer: Delhi\n");

    // Question 2
    printf("\nQ2. Which language is known as the mother of many programming languages?\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C\n");
    printf("4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;
    else
        printf("Correct Answer: C\n");

    // Question 3
    printf("\nQ3. How many bits are there in one byte?\n");
    printf("1. 4\n");
    printf("2. 8\n");
    printf("3. 16\n");
    printf("4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;
    else
        printf("Correct Answer: 8\n");

    // Question 4
    printf("\nQ4. Who developed C language?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Guido van Rossum\n");
    printf("4. Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;
    else
        printf("Correct Answer: Dennis Ritchie\n");

    // Result Section
    printf("\n=================================\n");
    printf("          QUIZ RESULT            \n");
    printf("=================================\n");

    printf("Correct Answers : %d/4\n", score);
    printf("Percentage      : %.2f%%\n", (score * 100.0) / 4);

    if (score == 4)
        printf("Performance : Excellent!\n");
    else if (score >= 2)
        printf("Performance : Good Job!\n");
    else
        printf("Performance : Need More Practice.\n");

    printf("\nThank you for playing the quiz!\n");

    return 0;
}