// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the value of row:";
    cin>>row;
    for(int i=1;i<=row;i++){
        cout<<endl;
        for(int j=1;j<=row;j++){
            cout<<i<<" ";
        }
    }
    
}
 