#include <stdio.h> 

int main () {
    int a=0;
    
       do{  
           printf("the value of a is %d\n" , a);
           a++;
       }
    while(a>=10 && a<=20);{
        printf("the value of a is %d\n" , a);
        a++;
    }

    return 0 ;
}