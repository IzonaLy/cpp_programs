// 1
// 01
// 101
// 0101
// 10101
// 010101
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            (i+j)%2==0?cout<<"1":cout<<"0";}
        cout<<endl;
    }
    
}
