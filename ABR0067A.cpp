#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int n, digits = 0;
    cin >> n ;

    while (n > 0) {
    n /= 10;   
    digits++;  
    }

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    cout << digits;

    return 0;
}       