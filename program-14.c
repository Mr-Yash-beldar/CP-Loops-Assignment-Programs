/*
Date--5/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int i, start, end, sum = 0;
    printf("Enter lower limit: ");
    scanf("%d",&start);

    printf(" Enter upper limit: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum += i;
    }

    printf(" Sum of natural numbers from %d to %d = %d", start, end, sum);

    return 0;
}
