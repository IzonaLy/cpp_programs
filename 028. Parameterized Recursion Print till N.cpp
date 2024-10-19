//Recursion With Extra Paramenter 
#include<iostream>
using namespace std;
void print(int n,int m=0){
    if (m==n){
        cout<<n<<endl;
    } else {
        cout<<m<<endl;
        print(n,m+1);
    }
    
    
}
int main(){
    int n;
    cout<<"Enter The Value of N";
    cin>>n;
    print(n);
        
    
    return 0;
    
}
