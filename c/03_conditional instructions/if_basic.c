// program to check a number is even or odd
#include <stdio.h> 

int main () {
    int a, b;
    printf(" Enter the number\n");
    scanf("%d"  ,&a);

    if(a%2==0){ 
    printf("%d is an even number\n ", a );
    }
    else{
        printf("%d is an odd number",a);
    

    }
    return 0 ;
}