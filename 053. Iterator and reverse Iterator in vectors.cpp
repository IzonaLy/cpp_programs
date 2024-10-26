#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> numbers={3,0,67,9,4,10,20,30};
  vector<int>:: iterator baklool;
  for(baklool=numbers.begin()+1;baklool!=numbers.end()-1;baklool++){
    cout<<*baklool<<endl;
  }
  // vector<int>:: reverse_iterator: This is the type of the variable. It signifies that mahabaklool is an iterator specifically designed to traverse a vector<int> in reverse order.
  vector<int>:: reverse_iterator mahabaklool;
    for(mahabaklool=numbers.rbegin();mahabaklool!=numbers.rend();mahabaklool++){//.begin() and .end() were giving error use .rbegin() and .rend()
    cout<<*mahabaklool<<endl;
  }
  
 
  return 0;
}
