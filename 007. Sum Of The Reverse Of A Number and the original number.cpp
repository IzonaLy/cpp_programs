#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int y=x;
    int count=0,counter=0;
    for(;x>0;){
        
        counter=(counter*10)+(x%10);
        
        x=x/10;
        count++;
    }
    cout<<"The number of digits is: "<<count<<endl;
    cout<<"The reverse the number is: "<<counter;
    cout<<"the sum is"<<counter+y;
}
