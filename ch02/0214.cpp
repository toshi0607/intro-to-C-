#include "iostream"

using namespace std;

int main()
{
    int a, b;
    cout << "integer a: "; cin >> a;
    cout << "integer b: "; cin >> b;

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    cout << "sorted to be a <= b\n";
    cout << "a is " << a << "\n";
    cout << "b is " << b << "\n";
}
