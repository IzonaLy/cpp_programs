#include<iostream>
using namespace std;

int main(){
    int x =3;
    int *p;//int *p = &x; Have the same meaning
    p=&x;//
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<x<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    
        
    
    return 0;
    
}
