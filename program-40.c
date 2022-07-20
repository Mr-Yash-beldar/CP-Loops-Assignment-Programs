#include <stdio.h>
void main()
{
    int n;
    printf(" Enter value of n: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d ", n);
        n--;
    }
}
