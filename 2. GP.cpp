#include <iostream>
double power(double base, int exponent) {
    // Base case: any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1.0;
    }
    // If the exponent is negative, calculate the positive exponent and take the reciprocal
    else if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    // Recursive case: multiply the base by the result of the power function with exponent - 1
    else {
        return base * power(base, exponent - 1);
    }
}
using namespace std;

int main() {
  int r,n=0,current_n=1;
  //r is thw multiplication factor and n is the total number of terms
  cout<<"Enter The Value Of r and n"<<endl;
  //enter the values of r and n
  cin>>r>>n;
  //a complex loop that has the formula of gp for comparing the series and well incrementing the value of current_n and current term
  for (int a=1,tn=0;tn<=a*power(r,n-1);current_n++,tn=a*power(r,current_n-1))
    //for skipping the first iteration and printing the rest of the series
    tn<a?cout<<" ":cout<<(tn)<<endl;
    
  return 0;
}
