/*
Date--8/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int num;
    int product;
    printf(" Enter any number to calculate product of digit: ");
    scanf("%d", &num);

    product = (num == 0 ? 0 : 1);

    while (num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }

    printf(" Product of digits = %d", product);

    return 0;
}