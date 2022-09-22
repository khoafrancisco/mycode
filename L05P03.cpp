
#include <iostream>
using namespace std;

void listEven(int A[], int n);

int main() {
    int n, A[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    listEven(A, n);
    return 0;
}

void listEven(int A[], int n) {
    for (int i = 0; i < n; i++)
        if (A[i] % 2 == 0)
            cout << A[i] << endl;
}
