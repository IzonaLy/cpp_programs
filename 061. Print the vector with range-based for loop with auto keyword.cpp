//Print the vector with range-based for loop with auto keyword
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v= {1,2,3,4,6,7,8,9,10};
  for(auto n:v){
    cout<<n<<" ";
  }

  return 0;
}
