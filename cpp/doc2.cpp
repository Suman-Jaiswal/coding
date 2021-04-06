#include <iostream>
using namespace std;

int main (){
int i=0,j=0,k=0;

while (i<<5)
{
  cout << "hello" << endl;
  j=0;
  while (j<5)
  {
    cout << "good" << endl;
    k=0;
    while (k<5)
    {
      cout << "morning" << endl;
      k++;
    }
    j++;
  }
  i++;
}

return 0;
}