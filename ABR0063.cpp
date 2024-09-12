#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int a, b, r, s;
    cin >> a >> b >> r >> s;

    if(a % b == r) printf("R");
    if(a % b == s) printf("S");
    else printf("NO SOLUTION");

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}       
a