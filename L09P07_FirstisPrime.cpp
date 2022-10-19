#include <iostream>
#include <cmath>    // pow
using namespace std;
int a[100005];

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int firstPrime(int a[], int index, int n) {
    if (index == n)
        return -1;
    if (isPrime(a[index]))
        return index;
    return firstPrime(a, index + 1, n);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << firstPrime(a, 0, n);
    return 0;
}
