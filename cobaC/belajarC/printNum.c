#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char number[][10] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n < 10)
    {
        printf("%s", number[n-1]);
    }
    else printf("Greater than 9");

    return 0;
}
