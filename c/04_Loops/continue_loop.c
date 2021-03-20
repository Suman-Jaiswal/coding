#include <stdio.h> 

int main () {
    int a=0 , not=6;

    while(a<10){
        
        a++;
        
        
        if(a!=not)
        continue;
        else{
            printf(" the value of a is %d\n" , a);
        }
        
    }
    return 0 ;
}