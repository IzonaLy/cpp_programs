//Sum Of the second elements of a vector of pairs
#include<iostream>
#include<utility>
#include<vector>

using namespace std;
int main(){
  vector<pair<int,int>> v={{1,2},{15,10},{5,-4}};
  int sum=0;
  for(auto x:v){
    sum+=x.second;
  }
  cout<<sum<<endl;
 
  return 0;
}
