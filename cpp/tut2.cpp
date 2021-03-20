#include <iostream>
using namespace std;

int main (){
int age;
cout  << "tell me your age ?" << endl;
cin>> age;
if (age > 35){
  cout << "you are old" << endl;
  
}
else if(age >18 ){
  cout << " you are adult" << endl;
}
else if (age > 12){
  cout  << " you are adolescent" << endl;
}
else 
{
  cout << "you are child";
  
}

return 0;
}