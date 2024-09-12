#include "iostream"

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  //Таслалаас хойш оронгийн нарийвчлалыг гаргана.
  cout.setf(ios::fixed|ios::showpoint);
  cout.precision(1);

  cout << a + b << endl << a - b << endl << a * b;
  return 0;
} 
