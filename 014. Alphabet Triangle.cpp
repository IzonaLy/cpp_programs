// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<i+65;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    
}
 
