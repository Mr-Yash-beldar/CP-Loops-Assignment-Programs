/*
Date--10/7/2022
Purpose-- 
*/
#include <stdio.h>
void main()
{
    int i, end;
    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    i = 1;
    while (i <= end)
    {
        printf("%d ", i);
        i++;
    }
}
