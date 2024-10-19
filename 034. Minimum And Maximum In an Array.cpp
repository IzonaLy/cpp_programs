//Maximum and minimum in an array
#include<iostream>
using namespace std;

int main(){
    int arr[20]= {4,6,10,20,15,3,9,7,8,2,10,11,12,13,14,16,17,18,19,20};//minimum will change to 0 if there are empty spots in the array but "maximum" is not affected
    int mx=arr[0],mn=arr[0];
    for(int i=0;i<sizeof(arr)/4;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    };
    cout<<mx<<endl;
    cout<<mn<<endl;
    return 0;
}
