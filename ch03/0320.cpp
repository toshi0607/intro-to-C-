#include "iostream"

using namespace std;

int main()
{
    int n;
    cout << "how many integers do you add?\n";
    cin >> n;
    cout << "forced to be stopped at 9999\n";

    int sum = 0;
    for (int i= 0; i < n; i++) {
        int t;
        cout << "integer: ";
        cin >> t;
        if (t == 9999)
            goto Exit;
        sum += t;
    }
    cout << "total: " << sum << '\n';

Exit:
    ;
}