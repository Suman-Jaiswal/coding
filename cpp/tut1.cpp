#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  //operators//
int a=4 , b=5;
cout << "a + b = " << a+b << endl;
cout << "a - b = " << a-b << endl;
cout << "a * b = " << a*b << endl;
cout << "a / b = " << a/b << endl;
cout << "a % b = " << a%b << endl;
cout << "a++ = " << a++ << endl;
cout << "a-- = " <<  a--  << endl;
cout << "--a  = " << --a << endl;
cout << "++a = " << ++a << endl;
cout << endl;
cout << "the statement a==b and a<b is " << (!(a==b) && (a<b)) << endl;
cout << "the statement a==b or a<b is " << (!(a==b) || (a<b)) ;
cout << endl;
// type casting//
int x=4 ;
float y=6.5;
cout<< "a+b = " << x+y << endl;
cout << " a+ (int)b = " << x+ (int)y << endl;
cout << " a+ int(b) = " << x+ int(y) << endl;

//constants//
const float pi = 3.14 ;
//pi++; // cant change // code error//
cout << pi << endl;
cout << endl;

// manipulators//
int s=4,t=81,u=3546;
cout << " the value of s without setw is: " << s << endl;
cout << " the value of t without setw is: " << t << endl;
cout << " the value of u without setw is: " << u << endl;
cout << " the value of s with setw is: " << setw(4) << s << endl;
cout << " the value of t with setw is: " << setw(4) << t << endl;
cout << " the value of u with setw is: " << setw(4) << u << endl;
cout << endl;
// precedence//

int A=4 , B= 5;
int C = ((A*5)-B)+9;
cout  << "the value of c is :" <<C ;

return 0;
}