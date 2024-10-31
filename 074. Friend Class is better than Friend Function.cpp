#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator {
public:
  int add(int a, int b) { return a + b; }
  int sumRealComplex(Complex, Complex);
  int sumCompComplex(Complex, Complex);
};

class Complex {
  int a, b;
  // friend int Calculator ::sumRealComplex(Complex, Complex);
  // friend int Calculator ::sumCompComplex(Complex, Complex);
  //  Alternative: Make the entire class friend instead of making the functions
  //  one by one
  friend class Calculator;

public:
  void setNumber(int n1, int n2) {
    a = n1;
    b = n2;
    cout << "Your Number is " << a << " + " << b << "i" << endl;
  }
};

int Calculator::sumRealComplex(Complex o1, Complex o2) { return (o1.a + o2.a); }
int Calculator::sumCompComplex(Complex o1, Complex o2) { return (o1.b + o2.b); }
int main() {
  Complex o1, o2;
  o1.setNumber(1, 4);
  o2.setNumber(5, 7);
  Calculator calc;
  int res = calc.sumRealComplex(o1, o2);
  cout << "The sum of real part of o1 and o2 is " << res << endl;
  res = calc.sumCompComplex(o1, o2);
  cout << "The sum of Complex part of o1 and o2 is " << res << endl;

  return 0;
}
