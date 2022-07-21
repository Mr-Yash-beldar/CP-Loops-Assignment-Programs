/*
Date--12/7/2022
Purpose-- 
*/
#include <stdio.h>
void main()
{
    int i, j, end, sum;
    printf(" Enter limit: ");
    scanf("%d", &end);

    printf(" All Perfect numbers between 1 to %d:\n", end);
    for (i = 1; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}
