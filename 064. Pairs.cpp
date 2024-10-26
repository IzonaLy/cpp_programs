//Pairs
#include<iostream>
#include<utility>

using namespace std;
int main(){
  pair<int,float> p1(23,56.83);//Initialization of Pair
  pair<int, string> p2;//If I print directly without Initialization, It will give 0 for numerical data types and bool and nothing for string
  
  p2=make_pair(23,"Hello");//Another way of initialization
  
  auto p3=make_pair("Good","Vibes");//Third way of Initialization No need to declare
  cout<<p1.first<<" "<<p1.second<<endl;
  cout<<p2.first<<" "<<p2.second<<endl;
  cout<<p3.first<<" "<<p3.second<<endl;

  pair<int,float> p4(p1);//Initializing a pair with the help of another pair. The values also get copied.
  cout<<p4.first<<" "<<p4.second<<endl;
  
  pair<bool,string> p5;
  //Direct Assignment
  p5.first=true;
  p5.second="True";
  cout<<p5.first<<" "<<p5.second<<endl;

  pair<int,string> p6(12,"Hi");
  pair<int,string> p7(14,"Hello");
  p6.swap(p7);//Swapping the values of p6 and p7. The data types need to be the same for swapping to take place.
  cout<<p6.first<<" "<<p6.second<<endl;
  cout<<p7.first<<" "<<p7.second<<endl;

  pair<int,string> p8(13,"hi");
  pair<int,string> p9(13,"hi");
  cout<<(p8==p9)<<endl;//Checking if the values of p8 and p9 are equal.)

 
  return 0;
}
