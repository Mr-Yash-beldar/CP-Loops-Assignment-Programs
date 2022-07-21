/*
Date--6/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
   int num;
    int count = 0;
    printf(" Enter any number: ");
    scanf("%d",&num);

    do
    {
        count++;
        num /= 10;
    } 
    while (num != 0);
    {
        printf(" Total digits: %d", count);
    }

    return 0;
}
