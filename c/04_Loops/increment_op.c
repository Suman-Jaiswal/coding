#include <stdio.h> 

int main () {
    int i=5;
    printf("The value after i++ is %d\n", ++i);
    // i++ ----> pehle print then increament.   i--  =  i-1
    // ++i ----> pehle increament then print.
    printf("The value OF i is %d\n", i);
    i+=3;  // increament by some quantity  same as -= ,  *=  , /= and  %=
    printf("The value OF i is %d", i);
    return 0 ;
}