#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double r, m1, m2, g=6.67*0.00000000001;
    cin >> r >> m1 >> m2;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << g * ((m1 * m2) / (r * r));
    return 0;
} 