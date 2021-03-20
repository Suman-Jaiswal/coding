#include <stdio.h>

int main()
{

    int principal, rate, years;

    printf(" What is the value of principal? \n");
    scanf("%d", &principal);

    printf(" What is the value of rate? \n");
    scanf("%d", &rate);

    printf(" What is the value of years? \n");
    scanf("%d", &years);
    int b= principal*rate*years/100;

    printf("The value of simple interest is %d",b);

    return 0;
}