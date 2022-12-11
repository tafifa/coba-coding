#include <stdio.h>

int main()
{
    int number[] = {2,5,1,9,7};
    int length = sizeof(number) / sizeof(number[0]);

    int i = 0;

    int temp;
    int ctrl = length-1;
    
    while(ctrl > 0)
    {
        while(i < length-1)
        {
            if(number[i] > number[i+1])
            {
                temp = number[i];
                number[i] = number[i+1];
                number[i+1] = temp;
            }
            else 
            {
                ctrl--;
            }
            i++;
        }
    }
    

    int j = 0;
    while(j < length)
    {
        printf("%d ", number[j]);
        j++;
    }

    return 0;
}
