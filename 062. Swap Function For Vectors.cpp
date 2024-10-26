//Swap Function
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v1= {1,2,3,4,6};
  vector<int> v2= {11,12,13,14,16};
  v1.swap(v2);
  cout<<"Vector 1 after swap is"<<endl;
  for(auto n:v1){
    cout<<n<<" ";
  }
  cout<<endl;
  cout<<"Vector 2 after swap is"<<endl;
  for(auto n:v2){
    cout<<n<<" ";
  }
  return 0;
}
