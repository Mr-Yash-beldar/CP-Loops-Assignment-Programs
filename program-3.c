/*
Date--4/7/2022
Purpose--  Printing natural numbers reverse.
*/
#include <stdio.h>
int main()
{
    int i, start;
    printf("Enter starting value: ");
    scanf("%d",&start);

    for (i =start; i >=1; i--)
    {
        printf("%d  ", i);
    }

    return 0;
}
