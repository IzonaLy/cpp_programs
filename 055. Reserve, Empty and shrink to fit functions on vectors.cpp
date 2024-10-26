#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  //Resize the vector and Insert 50   10 times
  //v.resize(10,50)
  v.reserve(100);
  cout<<v.size()<<endl;
  cout<<"The Capacity of the vector is "<<v.capacity()<<endl;
  if(v.empty()){
    cout<<"No Elements in the vector"<<endl;
  }
  v.shrink_to_fit(); //Shrink thecapacity of vector to fit the size of vector
  cout<<"The Capacity of the vector is "<<v.capacity()<<endl;
 
  return 0;
}
