#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<bool> boo(10,0);
  for(int i=0; i<boo.size(); i++){
    cout<<boo[i]<<" ";
  };
  return 0;
}
