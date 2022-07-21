/*
Date--8/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int num, reverse = 0;
    printf(" Enter any number to find reverse: ");
    scanf("%d", &num);

    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    printf(" Reverse number is %d", reverse);

    return 0;
}
