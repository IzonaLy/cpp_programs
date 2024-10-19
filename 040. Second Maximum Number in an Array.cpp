//Seconf Maximum Number in an array
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int mx=50,mn=1;
    int maximum=0,second=0;
    for(int i=0;i<sizeof(arr)/4;i++){
        
        arr[i]=(int)rand() % (mx - mn + 1) + mn;
        maximum=max(maximum,arr[i]);
        cout<<arr[i]<<" "<<maximum<<endl;
        
    }
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]!=maximum){
            second=max(second,arr[i]);
        }
    }
    cout<<"Second Maximum Element in Array is "<<second<<endl;
    
    return 0;
}
