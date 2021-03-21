#include <iostream>
using namespace std;

//inline int product(int a , int b){
//  return a*b;
//}
float moneyrcvd( int currentmoney ,const float factor=1.04 ){
  return currentmoney * factor ;
}
int main (){
  //int a,b;
  //cout << "enter the value of a and b " << endl ;
  //cin >> a >> b ;
  //cout << " the product of a and b is " << product(a,b) << endl;
  //cout << " the product of a and b is " << product(a,b) << endl;
  //cout << " the product of a and b is " << product(a,b) << endl;
  //cout << " the product of a and b is " << product(a,b) << endl;
  //cout << " the product of a and b is " << product(a,b) << endl;
  int money = 100000;
cout <<"if you have Rs " << money << " in your bank , you will recive Rs " << moneyrcvd(money) << " after 1 yr" << endl;
cout <<"For VIP: if you have Rs " << money << " in your bank , you will recive Rs "
 << moneyrcvd(money,1.1) << " after 1 yr" << endl;



return 0;
}