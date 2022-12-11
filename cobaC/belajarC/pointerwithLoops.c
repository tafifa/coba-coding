#include <stdio.h>

int main()
{
    int number = 0;
    int number1, number2, number3;

    int *pointer = &number;

    while (number < 20)
    {
        printf("%p\n", pointer);
        if (number % 2 == 0 && number <= 10)
        {
            number1 = number;
            pointer = &number1;
            printf("pointer 1(%d): %p\n", number, pointer);
        }
        else if (number % 2 == 1 && number <= 10)
        {
            number2 = number;
            pointer = &number2;
            printf("pointer 2(%d): %p\n", number, pointer);
        }
        else if (number >= 10 && number % 3 != 1)
        {
            number3 = number;
            pointer = &number3;
            printf("pointer 3(%d): %p\n", number, pointer);
        }
        else 
        {
            pointer = &number;
            printf("pointer default(%d): %p\n", number, pointer);
        }
        number++;
    }
}