#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double n;
    cin >> n;

    if(int m = n / 100) cout << m;

    return 0;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   