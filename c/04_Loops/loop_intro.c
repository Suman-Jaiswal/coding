#include <stdio.h>

int main()
{
    //   int a=1;
    //   printf("%d\n", a);
    //   a++ ;
    //   printf("%d\n", a);  loops are use to repeat similar parts of a code snippet

    int a;
    scanf("%d", &a);

    while (a < 10)
    // while (a>10) this will lead to an infinite loop.

    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}