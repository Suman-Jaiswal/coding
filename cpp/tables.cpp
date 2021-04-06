#include <iostream>
#include <math.h>
using namespace std;

int main (){
int i,j=1;
cout << "Enter number?";
cin >> i ;
do {
  cout << i << " x " << j << " = ";
  cout << i*j << endl;
  j++;
}
while ( j< 11 );

return 0;
}