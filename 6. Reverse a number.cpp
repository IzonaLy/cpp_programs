#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int count=0,counter=0;//Multiplicative identity instead of additive identity
    for(;x>0;){
        
        counter=(counter*10)+(x%10);
        
        x=x/10;
        count++;
    }
    cout<<"The number of digits is: "<<count<<endl;
    cout<<"The reverse of the number is: "<<counter;
}
