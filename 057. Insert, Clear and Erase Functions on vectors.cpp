#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,3,5,7,9,11,13,15,17,19};

  
  vector<int> :: iterator it;
  it=v.begin();

  
  v.insert(it+3/*Start Inserting Before 3rd INdex*/,2/*Number of Elements to Insert*/,100/*The Number to Insert*/);

  
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }

  
  cout<<endl;
  //v.clear();//This will clear the vector

  
  //This Will erase from an Index or within a range
  //v.erase(v.begin()+3);
  v.erase(v.begin()+3,v.begin()+7);
  
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
 
  return 0;
}
