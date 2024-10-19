//Print Power of a number with the help of return type
#include<iostream>
using namespace std;
int power(int a,int b){
    if (b==0){
        return 1;
    } else {
        
         return a*power(a,b-1);;
        
        
    }
    
    
}
int main(){
    int b,e;
    cout<<"Enter The Value of Base"<<endl;cin>>b;
    cout<<"Enter The Value of Exponent"<<endl;cin>>e;
    
    cout<<power(b,e);
        
    
    return 0;
    
}
