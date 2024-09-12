#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 2000) cout << n % 10;
    else cout << n;

    return 0;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   