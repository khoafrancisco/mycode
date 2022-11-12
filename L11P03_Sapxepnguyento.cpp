#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < (int)sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void merge(int n1, int L[], int n2, int R[], int a[]) {
    int inf = 1000001;
    L[n1] = inf;
    L[n2] = inf;

    int i, j, k;
    i = j = k = 0;
    while (i < n1 || j < n2) {
        if (L[i] < R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
}

void mergeSort(int n, int a[]) {
    int L[501];
    int R[501];
    if (n > 1) {
        int n1 = n / 2;
        int n2 = n - n1;
        for (int i = 0; i < n1; i++) {
            L[i] = a[i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = a[i + n1];
        }
        mergeSort(n1, L);
        mergeSort(n2, R);
        merge(n1, L, n2, R, a);
    }
}

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int notPrime[1000];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            notPrime[k] = a[i];
            k++;
        }
    }
    mergeSort(k, notPrime);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            cout << notPrime[j] << ' ';
            j++;
        }
        else {
            cout << a[i] << ' ';
        }
    }
    return 0;
}
