#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x, y, z, result1, result2, max;
    cin >> x >> y >> z;

    result1 = (x + y + z);
    result2 = (x * y * z);

    if(result1 > result2) {
        max = result1;
    }
    else {
        return result2;
    }

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << max;
    return 0;
}
a