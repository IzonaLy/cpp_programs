//Create a Random Array With fixed Range in c++ 
//But the range is not random at all it just generates the same thing again and again as you run the program
#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int mx=50,mn=1;
    for(int i=0;i<sizeof(arr)/4;i++){
        
        arr[i]=(int)rand() % (mx - mn + 1) + mn;
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
