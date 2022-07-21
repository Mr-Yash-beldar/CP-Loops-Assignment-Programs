/*
Date--12/7/2022
Purpose-- 
*/
#include <stdio.h>
void main()
{
    int a = 0, b = 1, c;
    int i, limit;
    printf("\n Enter the limit upto which you want to print Fibonacci Series: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
