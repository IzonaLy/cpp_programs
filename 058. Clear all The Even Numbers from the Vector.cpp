//Clear all The Even Numbers from the Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9,10};


  
  for(int i=0;i<v.size();i++){
    if(v[i]%2==0){
      v[i]=0;
      v.erase(v.begin()+i);
    }
    }
  cout<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
  return 0;
}
