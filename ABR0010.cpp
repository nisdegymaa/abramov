#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double h;
    cin >> h;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << sqrt((2 * h) / 9.81);
    return 0;
} 