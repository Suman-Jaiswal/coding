#include <stdio.h> // doubt : why is it NA for 17 onward?
int fact (int x);
int main () {
    int a ;
    printf("Enter x ?\n");
    scanf("%d" , &a);
    printf("The value of %d! is %d\n", a , fact(a));
  
  return 0 ;

}
int fact(int x){
  if(x==0 || x==1){
    return 1;
  }
  else {
    return x * fact(x-1);
  }
}