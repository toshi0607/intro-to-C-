#include "iostream"

using namespace std;

int main()
{
    int a, b;
    cout << "integer a: "; cin >> a;
    cout << "integer b: "; cin >> b;

    int min, max;
    if (a < b) {
        min = a, max = b;
    } else {
        min = b, max = a;
    }
    cout << "smaller value is " << min << "\n";
    cout << "larger value is " << max << "\n";
}
