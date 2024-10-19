//Recursion Without Extra Paramenter
// Just change the position of calling the function and the function prints in the opposite order
#include<iostream>
using namespace std;
void print(int n){
    if (n==0){
        cout<<n<<endl;
    } else {
        print(n-1);
        cout<<n<<endl;
        
    }
    
    
}
int main(){
    int n;
    cout<<"Enter The Value of N";
    cin>>n;
    print(n);
        
    
    return 0;
    
}
