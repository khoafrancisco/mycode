#include <iostream>
#include <cmath>
using namespace std;
int maxDigit(int n) {
    if (n < 10)
        return n;
    else
        return max(n % 10, maxDigit(n / 10));
}

int main() {
    int n;
    cin >> n;
    if (n < 0)
        n *= -1;
    cout << maxDigit(n);
    return 0;
}
