//Add 2 2D arrays
#include<iostream>
using namespace std;

int main(){
    int arr[5][5],brr[5][5],crr[5][5];
    int mx=50,mn=1;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
            arr[i][j]=(int)rand() % (mx - mn + 1) + mn;
            brr[i][j]=(int)rand() % (mx - mn + 1) + mn;
            cout<<arr[i][j]<<"-"<<brr[i][j]<<" ";
            crr[i][j]=arr[i][j]+brr[i][j];
            cout<<crr[i][j]<<" ";//Printing it here because too lazy to create another loop
        }
        cout<<endl;
    }
    return 0;
}
