#include <iostream>
using namespace std;

int main (){
  int i , j , k , a;
for (a=0 ; a<1 ; a++) 
{
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < i; j++)
    {
      cout<< " ";
    } 

    for (k = 0; k<5-i ; k++)
    {
      cout << k+1 << " ";
    }

    cout << endl;
    
  }
} 
return 0;
}