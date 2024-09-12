#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int k, l;
    cin >> k >> l;

    if (k != l) {
        if (k < l) {
            k = l;
        } else {
            l = k;
        }
    } 
    else {
        k = 0;
        l = 0;
    }

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << k << endl << l;

    return 0;
}   