#include <iostream>
using namespace std;

int main() {
  int d=0,n=0,current_n=1;
  cout<<"Enter the value of n and d";
  cin>>n>>d;
  for (int a=4,an=0;an<=a+(n-1)*d;an=a+(current_n-1)*d,current_n++){
    an< a?cout<<endl:cout<<an<<endl; 
  }
  return 0;
}
