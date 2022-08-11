#include "cmath"
#include "iostream"

using namespace std;

int main()
{
    double x;

    cout << "integer: ";
    cin >> x;

    if (double m = fmod(x, 10)) {
        cout << "Value is not divisible by 10.\n";
        cout << "Surplus is " << m << "\n";
    } else {
        cout << "Value is divisible by 10.\n";
    }
}
