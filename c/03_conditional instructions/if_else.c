#include <stdio.h>

int main()
{
    int age;

    printf(" Enter your age\n");
    scanf("%d", &age);

   // if (16 < age)
   // {
   //     printf(" okay! , you can drive in this campus. ");
   // }
     if (50==age)  // or age==50          // age=50 is use for assignment
    {
        printf(" okay! , you can drive in this campus. ");
    }

    else
    {
        printf("Sorry! , you cannot drive in this campus. ");
    }

    
    return 0;
}