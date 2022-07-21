/*
Date--4/7/2022
Purpose--  Printing alphabets from a-z.
*/
#include <stdio.h>
int main()
{
    char ch;
    printf(" Alphabets from a - z are: \n");

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c  ", ch);
    }

    return 0;
}
