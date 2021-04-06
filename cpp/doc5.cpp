#include <iostream>
using namespace std;

int main (){
int i;
cout << "S" << endl;
for(i=0 ; i<7 ; i++ ){
 
  if (i==0 || i==6)
  {
    cout <<" XXXXX "<<endl;
  }else if (i==1 || i==5)
  {
    cout<<"X     X"<<endl;
  }else if (i==2)
  {
    cout << "X"<<endl;
  }else if (i==3)
  {
    cout << " XXXXX "<<endl;
  }else 
  {
    cout << "      X"<<endl;
  }
 
}

return 0;
}
