//Vector of Pairs
#include<iostream>
#include<utility>
#include<vector>

using namespace std;
int main(){
  vector<pair<int,string>> Student_Details={{1,"Risa"},{2,"Danika"},{3,"Shyla"}};//Initializing vector of pairs
  Student_Details.push_back(make_pair(4,"Veta"));
  Student_Details.push_back({5,"Micheal"});
  cout<<Student_Details[0].second<<endl;//Printing the second element of the first pair
  for(int i=0;i<Student_Details.size();i++){
    cout<<Student_Details[i].first<<" "<<Student_Details[i].second<<endl;
  }
 
  return 0;
}
