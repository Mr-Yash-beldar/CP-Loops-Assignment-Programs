#include <stdio.h>
void main()
{
    int i, num;
    printf(" Enter any number to find it is prime number or not: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            printf("The number %d is a prime number", num);
        }
    }
}