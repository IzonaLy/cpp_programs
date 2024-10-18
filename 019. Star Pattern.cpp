// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    if(n%2==0){
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            i==j||j+i==n+1?cout<<"* ":cout<<"  ";}
        cout<<endl;
    }
    
}
