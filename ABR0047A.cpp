#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if(x<y+z && y<x+z && z<x+y) printf("YES");
    else printf("NO");

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   