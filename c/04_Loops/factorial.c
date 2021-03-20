#include <stdio.h>

int main()
{
    int i = 1, fact = 1, n;
    printf("Enter n.\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The value of %d!  is %d", n, fact);

    return 0;
}