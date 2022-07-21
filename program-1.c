/*
Date--4/7/2022
Purpose--  Printing natural numbers upto limit.
*/
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf(" Natural numbers from 1 to %d : \n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d  ", i);
    }
    return 0;
}
