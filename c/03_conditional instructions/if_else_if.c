#include <stdio.h>

int main()
{
    int age;

    printf(" Enter your age\n");
    scanf("%d", &age);

    if (age <= 15)
    {
        printf("You are a child.");
    }

    else if (age > 15 && age < 25)
    {
        printf("You are a youth.");
    }

    else if (age >= 25 && age < 65)
    {
        printf("You are an adult.");
    }

    else
    {
        printf("You are a senior.");
    }

    return 0;
}