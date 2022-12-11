#include <stdio.h>

int main()
{
    /* 
    TEST 1 WITH INTEGER
    */
    printf("TEST 1 - INTEGER\n");
    int number = 9;

    int *pointer = &number;
    printf("%p\n", pointer);
    // same as
    printf("%p\n", &number);

    /* 
    TEST 2 WITH CHARACTER
    */
    printf("TEST 2 - CHARACTER\n");
    char character = 'O';

    char *pointer2 = &character;
    printf("%p\n", pointer2);
    // same as
    printf("%p\n", &character);
    
    /* 
    TEST 3 WITH CHARACTERS STRING
    */
    printf("TEST 3 - CHARACTERS STRING\n");
    char string[8] = "string";
    
    char *pointer3 = string;
    printf("%p\n", pointer3);
    // same as
    printf("%p\n", string);

    return 0;
}