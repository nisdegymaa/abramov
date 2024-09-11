#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double r, n;
    cin >> r >> n;

    if(n > 2)

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << n * (2 * n * sin(3.14 / n));
    return 0;
} 