#include <iostream>
using namespace std;

void swap(int a,int b){
  int temp = a ;
  a=b;
  b=temp;
}
void pointerswap(int* a,int* b){
  int temp = *a ;
  *a = *b;
  *b = temp;
}
void swapreferencevar(int &a,int  &b){
  int temp = a ;
  a = b;
  b = temp;
}
int main (){
int x= 4,y=5;
cout << "x is " << x << " y is " << y << endl;
swap(x,y);
cout << "x is " << x << " y is " << y << endl;
pointerswap (&x , &y);
cout << "x is " << x << " y is " << y << endl;
swapreferencevar(x,y);
cout << "x is " << x << " y is " << y << endl;

return 0;
}