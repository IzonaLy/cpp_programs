//Copy Contents of one Array to another Array In Reverse Order In Single Loop
#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int empty[100];
    int mx=50,mn=1;
    for(int i=0,j=0;i<sizeof(arr)/4;i++){
       arr[i]=mn+rand()%(mx-mn+1);
       cout<<arr[i]<<" ";
        j=sizeof(arr)/4-1-i;
        empty[j]=arr[i];
    }

    cout<<endl<<endl;
    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<empty[i]<<" ";
    }
    
    return 0;
}
