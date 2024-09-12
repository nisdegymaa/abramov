#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    double r, n;
    cin >> r >> n;

    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(1);
    cout << n * sqrt(2 * r * r - 2 * r * r * cos(2 * 3.14 / n));
    return 0;
}
