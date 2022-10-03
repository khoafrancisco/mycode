#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    int N;
    int a[1000][1000];
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    int cnt = 0;
    for (int i = 0; i < N; i++)
        if (isPrime(a[i][i]))
            cnt += 1;
    cout << cnt;
    return 0;
}
