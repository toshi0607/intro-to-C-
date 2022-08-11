#include "ctime"
#include "cstdlib"
#include "iostream"

using namespace std;

int main()
{
    srand(time(NULL));
    int lucky = rand() % 10;
    cout << "Lucky number today is " << lucky << "\n";
}
