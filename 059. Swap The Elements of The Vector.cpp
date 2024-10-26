//Swap The Elements of The Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vect1={1,2,3,4,5};
  vector<int> vect2={11,12,13,14,15};
  int temp;
  for (int i=0;i<vect1.size();i++){
    temp=vect1[i];
    vect1[i]=vect2[i];
    vect2[i]=temp;
  }
  cout<<"VEct 1 is"<<endl;
  for(int i=0;i<vect1.size();i++){
    cout<<vect1[i]<<" ";
    }
  cout<<"Vect 2 is"<<endl;
  for(int i=0;i<vect2.size();i++){
    cout<<vect2[i]<<" ";
    }
  return 0;
}
