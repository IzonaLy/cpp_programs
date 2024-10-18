// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<(65+n);j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    
}
 
