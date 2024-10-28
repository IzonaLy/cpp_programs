#include<iostream>
using namespace std;

typedef struct employee{
  int eID;
  char favChar;
  float salary;

}ep;

union money{
  int rice;
  char car;
  float pounds;

};

int main(){
  ep harry;
  union money m1;
  m1.rice = 34;
  //struct employee shub;
  //struct employee ashu;



  harry.eID = 1;
  harry.favChar = 'c';
  harry.salary =120000000;
  cout<<"The value is "<<harry.eID<<endl;
  cout<<"The value is "<<harry.favChar<<endl;
  cout<<"The value is "<<harry.salary<<endl;
  cout<<"The value is "<<m1.rice<<endl;

  enum Meal{ Breakfast, lunch, dinner};
  cout<<Breakfast;
  cout<<lunch;
  cout<<dinner;
  Meal m2= Breakfast;
  cout<<m2;
  return 0;
}
