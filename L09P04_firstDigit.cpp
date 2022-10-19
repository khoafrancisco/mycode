#include <iostream>

using namespace std;

int firstDigit(int n) {
    if (n < 10)
        return n;
    return  firstDigit(n / 10);
}

int main() {
    int n;
    cin >> n;
    if (n < 0)
        cout << firstDigit(-n);
    else
        cout << firstDigit(n);
    return 0;
}
