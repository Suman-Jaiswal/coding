#include <iostream>
using namespace std;
void add(int &x , int &y); 
 int z;
int main (){
  int a , b ;
cout << "enter a"<<endl;
cin>>a;
cout << "enter b"<<endl;
cin>>b;
add(a,b);
cout << z <<endl;
return 0;
}
void add(int &x , int &y){
  z = x+y;
}