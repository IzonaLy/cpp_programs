//String Functions
#include<iostream>
#include<string>
#include<algorithm>//Reverse is In Algorithm
using namespace std;

int main(){
    string s= "Hell";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s.push_back('o');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append(" Bell");
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    //+ operator
    string s1="Hello";
    string s2=s1+" World ";
    
    cout<<s2<<endl;
    s2.clear();
    s2=" World "+s1;
    cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    // reverse Only a Part of String
    reverse(s2.begin(),s2.begin()+6);
    cout<<s2<<endl;
    //convert int to string
    int a=1049385;
    string num=to_string(a);
    cout<<num<<endl;
    //convert string to int
    string s3="1049385";
    int b=stoi(s3);
    cout<<b<<endl;
    return 0;
}
