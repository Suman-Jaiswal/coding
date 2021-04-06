#include <iostream>
using namespace std;

int main (){
  char p; 
  do {
int f;
cout << "enter number" <<endl;
cin>>f;
unsigned long long int i;
unsigned long long int fact=1;

for (i = 1; i <= f; i++)
{
  fact*=i;
}
cout << fact << endl;

  // cout << "Do you want to run again? (y/n)" << endl;
    p='y';

} while (p=='y');

return 0;
}