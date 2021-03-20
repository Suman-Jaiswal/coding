#include <stdio.h>

int main()
{
    int p, c, m ;
    printf("What is your marks in physics out of 100 ?\n");
    scanf("%d", &p);
    printf("What is your marks in chemistry out of 100 ?\n");
    scanf("%d", &c);
    printf("What is your marks in mathematics out of 100 ?\n");
    scanf("%d", &m);
    int total =p+c+m;
    printf("Your marks in total out of 300 is %d \n" , total);

    if (p >= 33 && c >= 33 && m >= 33 )
    {
        printf("Congratulations! You are Qualified.");
    }

    else
    {
        printf("Sorry!, Better luck next time.");
    }

    return 0;
}