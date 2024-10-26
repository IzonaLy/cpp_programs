#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<char> vowels={'a','e','i','o'};
  cout<<"The size of the vector is "<<vowels.size()<<endl;
  cout<<"The maximum_size of the vector is "<<vowels.max_size()<<endl;
  cout<<"The capacity of the vector is "<<vowels.capacity()<<endl;//The capacity starts with the initial size of the vector and is multiplied by 2 whenever it increses
  vowels.push_back('u');
  cout<<"The size of the vector is "<<vowels.size()<<endl;
  cout<<"The maximum_size of the vector is "<<vowels.max_size()<<endl;
  cout<<"The capacity of the vector is "<<vowels.capacity()<<endl;
  
 
  return 0;
}
