#include <iostream>
using namespace std;

int main (){
int a = 3 ;
int* b =  &a;
int** c = &b ;
cout << c<<endl;     // address//
cout << b << endl;        // address//
cout<<*c << endl;          //dereference//
cout << *b << endl;    //dereference//
cout << **c << endl;    //dereference//
return 0;
}