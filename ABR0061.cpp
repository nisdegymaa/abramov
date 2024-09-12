#include "iostream"
#include "cmath"

using namespace std;

int main() {
    double x;
    cin >> x;

    // Бүхэл хэсгийг олох (floor)
    double floorPart = floor(x);
    cout << floorPart << endl;
    
    // Ойролцоо бүхэл тоо олох (round)
    double roundedPart = round(x);
    cout << roundedPart << endl;
    
    // Таслалаас өмнөх хэсэг (trunc)
    double truncPart = trunc(x);
    cout << truncPart << endl;

    cout.setf(ios::fixed|ios::showpoint);
    cout.precision(1);

    return 0;
}   