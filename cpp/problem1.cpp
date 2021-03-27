#include <bits/stdc++.h>
using namespace std;

int main (){
int t;
cin >> t;
for ( t ; t > 0 ; t--)
{
  long long n,m,x;
  cin>>n>>m;
  cin>>x;

  long long a,b;

  if (x%n==0)
  {
    a=(x/n);
  }else a= (x/n)+1; b=x%n;

  if (b==0)
  {
    b=n;
  }
  long long c= ((b-1)*m)+a;
  cout << c << endl;

}

return 0;
}