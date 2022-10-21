#include <iostream>
using namespace std;

int a[1000];
int n;
int inf = -1000000001;

void merge(int n1, int L[], int n2, int R[], int a[]) {
    L[n1] = inf;
    R[n2] = inf;

    int i, j, k;
    i = j = k = 0;
    while (i < n1 || j < n2) {
        if (L[i] > R[j]) {
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
    int L[50001];
    int R[50001];
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

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(n, a);
    print(a, n);
    return 0;
}
