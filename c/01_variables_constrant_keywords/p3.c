#include <stdio.h>

int main()
{
    int radius;
    int height;
    float pi = 3.14;

    printf("What is the radius of cylinder?\n");
    scanf("%d", &radius);

    printf("What is the height of cylinder?\n ");
    scanf("%d", &height);

    printf("The Volume of cylinder is %f", pi * radius * radius * height);
    return 0;
}