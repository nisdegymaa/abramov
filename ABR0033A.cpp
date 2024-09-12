#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << max(x, y);
    return 0;
}   