//difference between the sum of even and odd positions
#include<iostream>
using namespace std;

int main(){
    int evensum=0,oddsum=0;
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<sizeof(arr)/4;i++){
        i%2==0?evensum+=arr[i]:oddsum+=arr[i];
        cout<<evensum<<"   "<<oddsum<<endl;
    }
    cout<<"The difference between the sum of even and odd positions is "<<evensum-oddsum<<endl;
    return 0;
}
