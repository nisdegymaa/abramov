#include "iostream"
#include "cmath"

using namespace std;

int main() {
    float x, y, z;
    cin >> x >> y;

    if(x > y) {
        z = y - x;
    } else {
        z = y - x + 1;
    }

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << z << endl;  

    return 0;
}   