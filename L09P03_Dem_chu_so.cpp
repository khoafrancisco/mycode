#include <iostream>
using namespace std;

int cntDigits(int n) {
    if (n < 10)
        return 1;
    return 1 + cntDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    if (n < 0)
        cout << cntDigits(-n);
    else
        cout << cntDigits(n);
    return 0;
}
