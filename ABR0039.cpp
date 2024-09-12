#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 1 && a < 3) printf("%f\n",a);
    if (b > 1 && b < 3) printf("%f\n",b);
    if (c > 1 && c < 3) printf("%f\n",c);

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}  