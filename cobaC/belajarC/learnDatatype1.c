#include <stdio.h>

int main()
{
    char character_number;
    char character_alphabet;
    char character_specialcharacters;

    printf("Input Here : "); scanf("%c", &character_number);
    // printf("Input Here : "); scanf("%c", &character_alphabet);
    printf("Input Here : "); scanf("%c", &character_specialcharacters);
    
    printf("Output Here : %c\n", character_number);
    // printf("Output Here : %c\n", character_alphabet);
    printf("Output Here : %c\n", character_specialcharacters);

    return 0;
}