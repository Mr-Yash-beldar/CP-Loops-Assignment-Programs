/*
Date--4/7/2022
Purpose--  Printing alphabets using ascii value.
*/
#include <stdio.h>
int main()
{
    int i;
    printf(" Alphabets from a - z are: \n"); 

    for (i = 97; i <= 122; i++)
    {
        printf("%c  ", i);
    }

    return 0;
}
