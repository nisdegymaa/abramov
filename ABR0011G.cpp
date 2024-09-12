#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double  x, y, z;
    cin >> x >> y >> z;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << y + x / (y * y + abs(x * x / (y + x * x * x / 3))) << endl << 1 + tan(z / 2) * tan(z / 2)<< endl;
    return 0;
} 