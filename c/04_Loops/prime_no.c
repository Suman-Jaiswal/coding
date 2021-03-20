#include <stdio.h> 

int main () {
    int i , n , prime;
    printf("enter the natural number which you want to check prime or not.\n");
    scanf("%d" , &n);

    for(i=2; i<n  ; i++ ){
        if (n%i==0)
        {
            prime=0;
            break;
        }
        
    }
        if ( prime==0 )
        {
            printf("%d is not a prime number" , n);
            
        } 
        
        else
        {
        printf("%d is a prime number" , n);
        }
        

  
    if(n==1 ){
        printf("In case of 1 , prime term not defined.");
    }
    
        
    return 0 ;
}