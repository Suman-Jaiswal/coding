#include <stdio.h> 

int main () {    //97-122
    char ch;
    printf(" Enter your character here . \n");
    scanf("%char" , &ch);

    if(ch>=97 && ch<=122){
        printf("Your character is lowercase.");
    }
    else
    {
        printf("Your character is not a lowercase.");
    }
    

    return 0 ;
}