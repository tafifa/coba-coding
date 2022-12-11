#include <stdio.h>

int main()
{
    int i = 5;

    printf("Angkanya adalah : %d \n", i);

    i = i + 2;

    printf("Ditambah dua menjadi : %d \n", i);

    float f = 0.123;
    float x = 1.5E3;

    printf("Bilangan riil adalah : %5.5f \n", f);
    printf("Bilangan riil kedua adalah : %10.2f \n", x);

    char abc = "A";

    printf(abc);

    return 0;
}
