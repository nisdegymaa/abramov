#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if(a < b && b < c) printf("YES");
    else printf("NO");

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   