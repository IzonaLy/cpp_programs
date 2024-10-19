//Print Factorial of a number with the help of return type
#include<iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 1;
    } else {
         return n*sum(n-1);
        
        
    }
    
    
}
int main(){
    int n;
    cout<<"Enter The Value of N";
    cin>>n;
    cout<<sum(n);;
        
    
    return 0;
    
}
