#include <stdio.h>

int main()
{
    char fullName[64] = "Muhammad Tafif Qairawan Assiddiqi";
    char name[16] = "Tafif";
    char address[16] = "Pontianak";
    int age = 18;
    char bloodType = 'A';
    char NIM[16] = "D1041211062";
    double gpa = 3.92;

    printf("Halo! Namaku adalah %s\n", fullName);
    printf("Kalian bisa panggil aku %s\n", name);
    printf("Umurku %i, dan aku tinggal di %s\n", age, address);
    printf("Golongan darah ku %c\n", bloodType);
    printf("NIM ku adalah %s\n", NIM);
    printf("IPK ku di semester 1 adalah %.2f", gpa);

    return 0;
}