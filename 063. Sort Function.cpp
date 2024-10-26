//Sort Function
#include<iostream>
#include<vector>
#include<algorithm>//For Sort Function
using namespace std;
int main(){
  vector<int> v1= {10,2,-1,4,79,60};
  sort(v1.begin(),v1.end());
  
  
  cout<<"The Sorted Vector is"<<endl;
  for(auto n:v1){
    cout<<n<<" ";
  }
 
  return 0;
}
