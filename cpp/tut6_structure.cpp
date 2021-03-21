#include <iostream>
using namespace std;

//1.structure//
//typedef struct employee {
//  int id;
//  char vchar;
//  float salary;
//} ep;

//2.union//
//typedef union money
//{
//  int gold;
//  int silver;
//  char gchar;
//}um;




int main (){
//ep suman;
//suman.id = 5;
//suman.vchar = 's';
//suman.salary = 10000000000;
//cout << suman.salary << endl;

//um suman;
//suman.gold= 1000;
//suman.silver= 2000;
//suman.gchar = 'h';  // <<-- this line overwrite above line , so garbage data of silver will be printed//
//cout << suman.gchar << endl;

//3.enum//
enum meal
{
  breakfast , lunch , dinner
};
meal m1 = breakfast;
meal m2 = lunch;
meal m3 = dinner;
cout << m3;

return 0;
}