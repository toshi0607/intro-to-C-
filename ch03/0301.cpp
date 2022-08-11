#include "string"
#include "iostream"

using namespace std;
int main()
{
    string retry;
    do {
        int month;
        cout << "month for seasons. month?: ";
        cin >> month;
        if (month >= 3 and month <= 5)
            cout << "Spring\n";
        else if (month >= 6 and month <= 8)
            cout << "Summer\n";
        else if (month >= 9 and month <= 11)
            cout << "Autumn\n";
        else if (month == 12 or month == 1 or month == 2)
            cout << "Winter\n";
        else
            cout << "\a no such a month\n";

        cout << "again? Y: yes, N: no: ";
        cin >> retry;
    } while (retry == "Y" or retry == "y");
}
