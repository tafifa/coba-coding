#include <stdio.h>

int main()
{
    printf("Welcome to Guess Number Program!");
    printf("\nIn here, you must be guess the number that I declarated before");

    int guess;
    int right = 2;

    printf("\nYour guess here: ");
    scanf("%d", &guess);

    while(guess != right)
    {
        printf("\nYour guess is wrong! try again: ");
        scanf("%d", &guess);
    }

    if(guess == right)
    {
        printf("Congrats, your guess is right!");
    }

    return 0;
}
