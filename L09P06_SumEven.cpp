#include <iostream>
using namespace std;

int a[100005];
int sumEven(int a[], int n) {
    if (n == 0)
        return 0;
    if (a[n - 1] % 2 == 0)
        return a[n - 1] + sumEven(a, n - 1);
    return sumEven(a, n - 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << sumEven(a, n);
    return 0;
}
