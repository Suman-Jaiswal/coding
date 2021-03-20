#include <stdio.h>
 //  "||"OR      "!"NEGATION     "&&" AND
int main()
{

    int age;
    int vipPass;

    printf(" Enter your age\n");
    scanf("%d", &age);

    printf(" Enter your vipPass\n");
    scanf("%d", &vipPass);

    if ((age < 80 && age >= 18) || (vipPass == 1 && age >= 15))
    {
        printf(" okay! , you can drive in this campus. ");
    }

    else
    {
        printf("Sorry! , you cannot drive in this campus. ");
    }

    return 0;
}