#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("the value of a+b is : %d\n", a + b);
    printf("the value of a-b is : %d\n", a - b);
    printf("the value of axb is : %d\n", a * b);
    printf("the value of a/b is : %d\n", a / b); // use float

    int z;
    z = b * a; //'legal
    //b*a=z ; // illegal

    printf("the value of z is %d\n", z);

    printf("the value of 5*4 is %d\n", 4 * 5);
    // printf(" the value of 5*4 id %d\n", (4)(5)); // NA
    printf("the value of 5*4 is %d\n", (4) * (5));

    //  printf("the value of 4^5 is %d\n", 4^5); //will not produce 4^5
    printf("the value of 2^5 is %f\n", pow(2, 5)); // use f not d. use pow for power

    printf("the value of 6+5 is %d\n", 6 + 5);
    printf("the value of 6+5.1 is %f\n", 6 + 5.1);
    // int int =int , float float =float , float int =float

    printf("the value of 5/2 is %d\n", 5 / 2); // ex of int int =int
    printf("the value of 5/2 is %f \n", 5.0 / 2);

    printf("the value of 3.0/9 is %f\n", 3.0 / 9);
    
    return 0;
}