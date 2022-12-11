#include <stdio.h>

int main()
{
    int a,b;
    char number[][16] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char exceeded[][16] = {"odd","even"};

    scanf("%d\n%d", &a, &b);

    for (a; a <= b; a++)
    {
        if (a < 10)
        {
            printf("%s\n", number[a-1]);
        }
        else
        {
            if (a % 2 == 0)
            {
                printf("%s\n", exceeded[0]);
            }
            else printf("%s\n", exceeded[1]);
        }
    }

    return 0;
}
