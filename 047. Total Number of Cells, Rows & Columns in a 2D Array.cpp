//Add 2 2D arrays
#include<iostream>
using namespace std;

int main(){
    int arr[6][7];

    cout<<"Total Number of Cells";
    cout<<sizeof(arr)/sizeof(arr[0][0])<<endl;
    cout<<"Number of Rows";
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Number of Columns";
    cout<<sizeof(arr[0])/sizeof(arr[0][0])<<endl<<endl;
