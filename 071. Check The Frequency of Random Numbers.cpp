#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
  vector<int>number(100),frequency(100);
  for (int i = 0; i < 100; ++i) number[i] = i+1;
  int data[1000];
  srand(time(0));
  for (int &n :data) n = rand() % 100 + 1;
  for (int n : data){
    frequency[n-1]++;
  }
  for (int i = 0; i < 100; ++i){
    cout << "\n" << number[i] << " occurs " << frequency[i] << " times";
  }
}
