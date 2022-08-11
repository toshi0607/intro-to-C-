#include "iostream"

using namespace std;

int main()
{
    int a, b;
    cout << "integer a: "; cin >> a;
    cout << "integer b: "; cin >> b;

    int min = a < b ? a : b;
    cout << "smaller value is " << min << "\n";
}