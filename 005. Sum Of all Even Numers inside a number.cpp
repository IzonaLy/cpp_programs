#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int count=0,counter=0;//Multiplicative identity instead of additive identity
    for(;x>0;){
        if ((x%10)%2==0){
            counter=counter+(x%10);
        }
        
        x=x/10;
        count++;
    }
    cout<<"The number of digits is: "<<count<<endl;
    cout<<"The sum of even numbers in the number is: "<<counter;
}
