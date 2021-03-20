#include <iostream>
using namespace std;
int main (){
  int age;
  cout <<"enter your age? ";
  cin >> age;
  if(age<30){
    if(age<18){
      if (age<12){
        cout<< "you are a child";
        return 0;
      }
     cout << "you are adolescent";
     return 0;
    }
    cout << "you are adult";
    return 0;

  }
  cout<<"you are old";
  return 0 ;
}