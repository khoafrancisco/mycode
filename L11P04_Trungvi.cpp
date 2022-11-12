#include <iostream>
using namespace std;

void insectionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int cur = a[i];
        int pos = i;
        while (pos > 0 && cur < a[pos - 1]) {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = cur;
    }
}

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insectionSort(a, n);
    if (n % 2 != 0) {
        cout << a[n / 2];
    }
    else {
        cout << (a[n / 2] + a[n / 2 - 1]) / 2.0;
    }
    return 0;
}
