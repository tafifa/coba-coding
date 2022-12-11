#include <stdio.h>

int main()
{
    int number[] = {2,5,1,9,7};
    int length = sizeof(number) / sizeof(number[0]);

    int i = 0;

    int temp;

    for(int idx=0; idx < length; idx++)
    {
        while(i < length-1)
        {
            // swap number
            if(number[i] > number[i+1])
            {
                temp = number[i];
                number[i] = number[i+1];
                number[i+1] = temp;
            }
            i++;
        }
    }


    // print output
    int j = 0;
    while(j < length)
    {
        printf("%d ", number[j]);
        j++;
    }

    return 0;
}
