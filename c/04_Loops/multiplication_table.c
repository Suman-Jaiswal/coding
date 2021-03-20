#include <stdio.h> 

int main () {
    int n , i=1 ,sum=0 ;
    printf("Enter n.\n");
    scanf("%d" , &n);
    printf("***MULTIPLICATION TABLE OF %d\n" , n);  
    for ( i = 1; i <=100000 ; i++)  {
               printf(" %d x %d = %d\n" ,n , i ,  n*i);  
       sum +=  n*i;
     }
        printf("sum of all occuring number in M table of %d is %d" , n , sum );
    return 0 ;
}