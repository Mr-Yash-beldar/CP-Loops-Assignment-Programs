#include <stdio.h>
void main()
{
    int base, exponent;
    int power = 1;
    int i;
    printf(" Enter base: ");
    scanf("%d", &base);

    printf(" Enter exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d", base, exponent, power);

}