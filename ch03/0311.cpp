#include "iostream"

using namespace std;

int main()
{
    int n;
    cout << "How many *s do you want to show?: ";
    cin >> n;
    if (n > 0) {
        for (int i = 0; i < n; i++)
            cout << '*';
        cout << '\n';
    }
}