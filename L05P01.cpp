#include <iostream>
using namespace std;

void input(int A[], int &n);
int sum(int A[], int n);

int main() {
    int n, A[1000];
    input(A, n);
    cout << sum(A, n);

    return 0;
}

void input(int A[], int &n) {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> A[i];
}

int sum(int A[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += A[i];
    return ans;
}
