//Clear the even numbers from the vector using iterator
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v= {1,2,3,4,6,7,8,9,10};
  vector<int>::iterator it;
  it=v.begin();
  while(it!=v.end()){
    if(*it%2==0){
      v.erase(it);
    }
    else{
      it++;
    }
  }
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
