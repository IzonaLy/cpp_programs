//2D Array with 10 at every Location
#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}