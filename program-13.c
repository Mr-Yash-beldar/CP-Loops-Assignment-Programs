/*
Date--5/7/2022
Purpose--
*/
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf(" Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
