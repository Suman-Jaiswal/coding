#include <stdio.h> 
int changes(int a);
int main () {
  int b;
  b=77;
printf ("the value of b before changes is %d\n" , b);
  b=  changes(45);
  
 
 printf("the valuie of b after changes is %d\n" , b); 
  
  return 0 ;

}
int changes(int a){
  a++;
  return a;
}