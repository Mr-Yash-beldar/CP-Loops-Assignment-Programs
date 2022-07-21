/*
Date--11/7/2022
Purpose-- 
*/
#include <stdio.h>
void main()
{
    int i, num, sum = 0;
    printf(" Enter any number to check perfect number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num && num > 0)
    {
        printf("%d is Perfect Number", num);
    }

    else
    {
        printf("%d is Not a Perfect Number", num);
    }
}