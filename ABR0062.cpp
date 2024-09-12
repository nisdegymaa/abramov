#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x;
    cin >> x;

    if(x % 2 == 0) printf("EVEN");
    else printf("ODD");

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   
