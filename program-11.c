/*
Date--5/7/2022
Purpose-- .
*/
#include <stdio.h>
int main()
{
    int i, n;
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf(" All odd numbers from 1 to %d are: \n", n);

    for (i = 1; i <= n; i += 2)
    {
        printf("%d  ", i);
    }

    return 0;
}