#include "iostream"

using namespace std;

int main() {
  double v1, t1, v2, t2;
  cin >> v1 >> t1 >> v2 >> t2;

  cout.setf(ios::fixed|ios::showpoint);
  cout.precision(1);
  
  cout << (v1 * t1  + v2 * t2) / (v1 + v2) << endl << v1 + v2;
  return 0;
} 