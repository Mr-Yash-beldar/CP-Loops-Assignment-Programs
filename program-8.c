/*
Date--4/7/2022
Purpose--  Printing natural numbers upto limit.
*/
#include <stdio.h>
int main()
{
    int i, n;
    printf(" Print all even numbers till: ");
    scanf("%d", &n);

    printf(" All even numbers from 1 to %d are: \n", n);

    for (i = 2; i <= n; i += 2)
    {
        printf("%d  ", i);
    }

    return 0;
}
