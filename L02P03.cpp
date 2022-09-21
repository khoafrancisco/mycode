#include <iostream>
using namespace std;
int main()
{
    int month;
    cin >> month;
    if (month <= 3) {
        cout << 1;
    } else if (month <= 6) {
        cout << 2;
    } else if (month <= 9) {
        cout << 3;
    } else {
        cout << 4;
    }
    return 0;
}
