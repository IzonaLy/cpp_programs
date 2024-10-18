//   +  
//   +  
// +++++
//   +  
//   +  
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Better Luck Next Time";
        return 0;
    };
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            i==n/2+1||j==n/2+1?cout<<"+":cout<<" ";}
        cout<<endl;
    }
    
}
