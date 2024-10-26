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
  vowels.resize (3);//All Extra Elements are Erased
  for (int i=0;i<vowels.size();i++){
    cout<<vowels[i]<<endl;
  }
  vector<int> numbers={1,2,3,4};
  numbers.resize(10);//Eztra Elements are added and filled with 0
  for (int i=0;i<numbers.size();i++){
    cout<<numbers[i]<<endl;
  }
 
  return 0;
}
