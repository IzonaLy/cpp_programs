#include<iostream>
using namespace std;

int main(){
    int x =3;
    int *p;//int *p = &x; Have the same meaning
    p=&x;//
    cout<<x<<endl;
    cout<<*p<<endl;
    *p=23;
    cout<<*p<<endl;
        
    
    return 0;
    
}
