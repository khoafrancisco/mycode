#include <iostream>
using namespace std;
int a[1003];
int odd[1003], even[1003];
int n, nOdd, nEven;
void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int cur = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > cur) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = cur;
    }
}
void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    nOdd = nEven = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even[nEven++] = a[i];
        }
        else
            odd[nOdd++] = a[i];
    }
    insertion_sort(odd, nOdd);
    insertion_sort(even, nEven);
    int pa, pb; //j is iterator of even array, k is iterator of odd array
    pa = 0;
    pb = nOdd - 1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << even[pa++] << " ";
        }
        else
            cout << odd[pb--] << " ";
    }

    return 0;
}
