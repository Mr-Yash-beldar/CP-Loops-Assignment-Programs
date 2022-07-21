/*
Date--6/7/2022
Purpose-- 
*/
#include <stdio.h>
int main()
{
    int i, num;
    printf(" Enter number to print table: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }

    return 0;
}