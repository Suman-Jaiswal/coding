#include <iostream>
using namespace std;
void displayhello();
void callhello();
void displayhello(){
  callhello();
}
void callhello(){
  cout << "hello";
}
int main (){
displayhello();
return 0;
}
