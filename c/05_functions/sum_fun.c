#include <stdio.h> // sum is a fn which takes a and b as input and resturns an interger as an output 
int sum( int a , int b);// fn proto type declaration
int main () {
  int c;
 c= sum (2,5); //fn call
 printf("The sum of a and b is %d\n" , c);

  return 0 ;
}
int sum (int a , int b){
  int result;
  result = a+b ;
  return result ;
}