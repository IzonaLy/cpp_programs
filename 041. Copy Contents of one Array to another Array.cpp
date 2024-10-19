//Copy Contents of one Array to another Array
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int empty[10];
    int mx=50,mn=1;
    for(int i=0;i<sizeof(arr)/4;i++){
       arr[i]=mn+rand()%(mx-mn+1);
    }
    for(int i=0;i<sizeof(arr)/4;i++){
        empty[i]=arr[i];
    }
    
    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<empty[i]<<" ";
    }
    
    return 0;
}
