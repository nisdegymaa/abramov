#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double a;
    cin >> a;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << sqrt(3) / 4 * (a * a);
    return 0;
} 