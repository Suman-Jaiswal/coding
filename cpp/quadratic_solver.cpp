#include <iostream>
#include <math.h>
using namespace std;

int main (){
  cout<<endl;
  cout << "***** Quadratic Equation Solver *****" << endl;
  cout << " Ax^2 + Bx + c = 0" << endl;
  cout << endl;

  for (bool k= 1; k==1;){
    float a , b , c;
    cout << "A = " ;
    cin>> a ;
    cout << "B = ";
    cin>> b ;
    cout << "C = " ;
    cin>> c ;
    cout<< endl;
    
    float d= pow(b , 2) - 4*a*c ;
    
    if (d>=0) {
      float root_d = pow(d , 0.5);
      float x1 = (-b+root_d)/(2*a) , x2= (-b-root_d)/(2*a);
      cout  << " Real Solutions." << endl;
      cout << "x1= " << x1 <<"          x2= " << x2;
      }
    else
    {
      cout << "No real Solutions." << endl;
       float im_d = -1*d;
       float root_im_d = pow ( im_d , 0.5);
       float X1 = -b/ (2*a) , Y1 = root_im_d / (2*a) , Y2 = -root_im_d / (2*a);
       cout << "x1 = " << X1 << " + " << Y1 << " i" << "         x2 = " << X1 << " + " << Y2 <<" i";
    }

    cout << endl;
    cout << " press 1 to run again or 0 to exit." ;
    cin>> k ;
    if (k==1)
    {
      continue;
    }
  }
 return 0;
}