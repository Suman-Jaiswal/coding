#include <stdio.h> 

int main () {
    int i=1, sum=0 ,n;
    printf("*****SUM OF FIRST n NATURAL NUMBERS*****\n\n");
    printf("Enter the value of n.\n");
    scanf("%d" , &n );

    for ( i = 1; i<=n; i++)
    {
        sum +=i;
    }
        printf("sum of first %d natural number is %d\n" , n , sum);
    
    
    return 0 ;
}