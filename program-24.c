/*
Date--7/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int n, sum = 0, first, last;
    printf(" Enter number: = ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf(" first digit = %d and last digit = %d\n", first, last);

    return 0;
}