/*
Date--7/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int num, sum = 0, firstDigit, lastDigit;
    printf(" Enter number to find sum of first and last digit: ");
    scanf("%d",&num);

    lastDigit = num % 10;

    firstDigit = num;

    while (num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf(" Sum of first and last digit = %d", sum);

    return 0;
}