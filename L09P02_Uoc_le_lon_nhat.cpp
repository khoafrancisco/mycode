#include <iostream>
using namespace std;

int maxOddDivisior(int n, int x) {
    if (x % 2 == 1 && n % x == 0) {
        return int(x);
    }
    return maxOddDivisior(n, x / 2);
}

int main() {
    int n;
    cin >> n;
    cout << maxOddDivisior(n, n);
    return 0;
}
