//Increment the even positions by 10 and multiply odd positions by 2
#include<iostream>
using namespace std;

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<sizeof(arr)/4;i++){
        i%2==0?arr[i]+=10:arr[i]*=2;
        cout<<arr[i]<<endl;
    }
    return 0;
}
