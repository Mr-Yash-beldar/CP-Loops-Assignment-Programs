/*
Date--7/7/2022
Purpose-- 
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int count = 0;
    printf(" Enter any number: ");
    scanf("%d", &num);

    count = (num == 0) ? 1 : (log10(num) + 1);

    printf(" Total digits: %d", count);

    return 0;
}
