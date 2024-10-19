//Arrays are always passed by reference
#include<iostream>
using namespace std;
void change(int brr[]){//name changed still the original array changes
    brr[0]=9;
}
int main(){
    int arr[3]= {1,2,3};
    change(arr);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    };
    return 0;
}
