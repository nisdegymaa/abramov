#include "iostream"
#include "cmath"

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  cout.setf(ios::fixed|ios::showpoint);
  cout.precision(1);
  
  cout << (a + b) / 2 << endl << sqrt(a * b);
  return 0;
} 