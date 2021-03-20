#include <stdio.h> 
void display();  // fun prototype.
int main () {
    printf("hello\n");
    display();
    printf("Good morning\n");
    
    return 0 ;
}
void display(){
    printf("world!\n");
}