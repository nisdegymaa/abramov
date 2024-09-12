#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double n;
    cin >> n;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            for (int c = b; c <= n; ++c) {
                if (a * a + b * b == c * c) {
                    cout<< a << b << c;
                }
            }
        }
    }

    return 0;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   
a