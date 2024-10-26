#include<iostream>
#include<vector>//Including the vector library
using namespace std;
int main(){
  // vector<int> numbers(10,5);//insert 10 elements with vaue 5 in the vector
  vector<int> numbers={1,2,5,6,9};//Initializing the vector
  int value;
  for(int i=0;i<3;i++){
    cout<<"enter the value"<<endl;
    cin>>value;
    numbers.push_back(value);
  }
  numbers.push_back(1);
  numbers.push_back(22);
  numbers.push_back(23);
  cout<<numbers.size()<<endl;
  cout<<numbers.capacity()<<endl;//Capacity always multiplies by 2
  
  fill(numbers.begin(),numbers.end(),5);//fill the vector with 5 from begining to end

  for(int i=0;i<numbers.size();i++){
    //Loop for printing the vector
    cout<<"THe value is"<<" ";

    cout<<numbers[i]<<endl;
  }
  //print the address of the Iterator pointing to the begining or end of the vector
  cout<<"Iterator Address "<<(void*)&(*numbers.begin())<<endl;
  
  
}
