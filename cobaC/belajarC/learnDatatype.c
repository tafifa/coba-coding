#include <stdio.h>

int main()
{
	// library

	int num_intd;
	int num_inti;

	long num_intd_long;
	long num_inti_long;

	float num_float;
	double num_double;

	char character_number;
	char character_alphabet;
	char character_specialcharacter;

	char character_string[8];


	// input

	printf("Enter number integer d here : "); scanf("%d", &num_intd);
	printf("Enter number integer i here : "); scanf("%i", &num_inti);

	printf("Enter number integer d long here : "); scanf("%d", &num_intd_long);
	printf("Enter number integer i long here : "); scanf("%i", &num_inti_long);

	printf("Enter number float here : "); scanf("%f", &num_float);
	printf("Enter number double here : "); scanf("%lf", &num_double);

	printf("Enter character number here : "); scanf("%c", &character_number);
	printf("Enter character alphabet here : "); scanf("%c", &character_alphabet);
	printf("Enter character special character here : "); scanf("%c", &character_specialcharacter);

	printf("Enter character string here : "); scanf("%s", character_string);


	//output

	printf("This is your number integer d : %d\n", num_intd);
	printf("This is your number integer i : %i\n", num_inti);

	printf("This is your number integer d long : %d\n", num_intd_long);
	printf("This is your integer i long : %i\n", num_inti_long);

	printf("This is your float : %f\n", num_float);
	printf("This is your double : %lf\n", num_double);

	printf("This is your character number : %c\n", character_number);
	printf("This is your character alphabet : %c\n", character_alphabet);
	printf("This is your character special character : %c\n", character_specialcharacter);

	printf("This is your character string here : %s\n", character_string);

	return 0;

}
