//Printing the Transpose of a Matrix
#include<iostream>
using namespace std;

int main(){
    int arr[6][7];
    cout<<"Total Number of Cells";
    cout<<sizeof(arr)/sizeof(arr[0][0])<<endl;
    cout<<"Number of Rows";
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int rows= sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of Columns";
    cout<<sizeof(arr[0])/sizeof(arr[0][0])<<endl<<endl;
    int columns=sizeof(arr[0])/sizeof(arr[0][0]);
    
    int mx=50,mn=10;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            arr[i][j]=(int)rand() % (mx - mn + 1) + mn;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Flip Both The columns and rows in the loops and indexes of arr[i][j] to arr[j][i]
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
