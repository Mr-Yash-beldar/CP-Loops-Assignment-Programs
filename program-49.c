/*
Date--12/7/2022
Purpose-- 
*/
#include <stdio.h>
void main()
{
    int i, j, cur, lastDigit, start, end;
    int fact, sum;
    printf(" Enter lower limit: ");
    scanf("%d", &start);

    printf(" Enter upper limit: ");
    scanf("%d", &end);

    printf(" All Strong numbers between %d to %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        cur = i;
        sum = 0;

        while (cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;

            for (j = 1; j <= lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact;
            cur /= 10;
        }

        if (sum == i)
        {
            printf("%d	", i);
        }
    }
}
