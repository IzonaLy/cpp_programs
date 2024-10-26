#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  int val;
  do{
    cout<<"Enter the element to enter to the vector(0 to exit)"<<endl;
    cin>>val;
    v.push_back(val);
  } while(val);//Loop breaks as soon as the value inside while turns to zero
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
  v.pop_back();
  v.pop_back();
  cout<<"Vector Elements after pop back are"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
 
  return 0;
}
