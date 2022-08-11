#include "iostream"

using namespace std;

int main()
{
    const double PI = 3.1416;
    double r;

    cout << "radius: ";
    cin >> r;

    cout << "Circumferential length is " << 2 * PI + r << "\n";
    cout << "Area is " << PI * r * r << "\n";
}
