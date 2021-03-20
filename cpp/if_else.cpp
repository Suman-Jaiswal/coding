#include <iostream>
using namespace std ;
int main (){
int age ;
cout << "enter age";
cin >> age ;
if (age<30){
  if (age<18){
    if (age<12){
      cout << "you are child";
    }
    else { cout << "you are teenager"; }
  }
  else { cout << "you are adult";}
}
else {
  cout << "you are old";
}

  return 0 ;
}