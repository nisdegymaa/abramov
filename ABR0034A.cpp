#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x, y, z, max;
    cin >> x >> y >> z;

    max = x;
    if(y > x) max = y;
    if(z > y) max = z;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << max;
    return 0;
}   