#include <stdio.h>
#include <math.h> // menggunakan func pow()
#include <string.h> // menggunakan func strlen()

int main()
{
    int num; // nilai integer awal
    scanf("%d", &num); // input integer awal

    // mengubah num ke string pada numStr
    char numStr[16];
    sprintf(numStr, "%d", num);

    // menghitung panjang string numStr untuk looping
    int lenNum = strlen(numStr);
    printf("%d\n", lenNum);

    int numDigits; // angka pada digit ke-i
    int exp; // eksponen basis 10
    int sum = 0; // jumlah seluruh angka pada digit

    // looping jumlah digit
    for (int i = 1; i <= lenNum; i++)
    {
        exp = pow(10, i);
        numDigits = (num % exp) / pow(10, i-1); // rumus mengambil digit
        sum += numDigits; // menjumlahkan seluruh angka pada digit
        printf("\nDigits: %d", i); // mencetak digit keberapa
        printf("\n\tNum Digit: %d", numDigits); // mencetak angka pada digit ke-i
    }
    printf("\n\nSum: %d", sum); // mencetak jumlah seluruh angka pada digit

    return 0;
}
