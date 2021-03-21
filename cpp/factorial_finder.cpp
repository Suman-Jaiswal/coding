#include <iostream>
using namespace std;
int fact (int x ) {
  int f;
  if ( x==0 || x == 1)
  {
    return 1;
  }
  else {f = x * fact(x-1);
  return f;
  }
}
int main (){
  int N;
cout << " enter N ? " <<endl;
cin >> N ;
cout << N << " ! = " << fact (N);
return 0;
}