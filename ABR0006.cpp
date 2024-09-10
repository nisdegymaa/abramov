#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << sqrt(a * a + b * b) << endl <<a * b / 2;
    return 0;
} 