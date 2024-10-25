#include<iostream>
using namespace std;
int power(int x,int n){
  if(n==0){
    return 1;
  }
  int output=1;
  while (n>0){
    if(n%2==0){
      x*=x;
      n/=2;
    }
    else{
      output*=x;
      n--;
    }

  }
  return output;
}

int main(){
  int x=3;
  int n=5;
  cout<<power(x,n)<<endl;
  return 0;
}
