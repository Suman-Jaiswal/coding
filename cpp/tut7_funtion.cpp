#include <iostream>
using namespace std;
int sum(int,int);
void t();

int main (){
int MAmarks , PHmarks;
cout << "enter MA marks" << endl;
cin >> MAmarks;
cout << "enter PH marks" << endl;
cin >> PHmarks;
cout << " total marks is = " << sum (MAmarks , PHmarks) ;
t();
return 0;
}

 int sum(int n1, int n2){
   int c;
   c=n1+n2;
   return c;
 }

 void t() {
   cout << " , thanks" ;
 }