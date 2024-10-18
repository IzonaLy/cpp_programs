#include<iostream>
using namespace std;
int fact(int x){
    int product=1;
    for(int i=1;i<=x;i++){
        product*=i;
    };
    return product;
}
int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    
    cout<<"Enter the value of N"<<endl;
    cout<<"Enter The value of R"<<endl;
    int n,r;
    cin>>n>>r;
    cout<<"The value of nCr is"<<combination(n,r)<<endl;
        
    
    return 0;
    
}
