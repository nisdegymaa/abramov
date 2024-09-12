#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double n;
    cin >> n;

    while (n >= 10) {
    n /= 10;   
    }

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << n;

    return 0;
}       