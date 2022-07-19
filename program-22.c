#include <stdio.h>
int main()
{
    int n, last;
    printf(" Enter any number:	");
    scanf("%d", &n);

    last = n % 10;

    printf(" Last digit = %d", last);

    return 0;
}
