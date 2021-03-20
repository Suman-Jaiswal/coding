#include <stdio.h>

int main()
{
    int a = 0;
    int n;
    printf("Enter your natural number.\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", a + 1);
        a++;
    }while (a < n);
    return 0;
}