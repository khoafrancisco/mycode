#include <iostream>
#include <math.h>
using namespace std;


bool isPrime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main () {
    int m, n, a[1000][1000];
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];


    int cnt = 0;
    for (int i = 0; i <= m - 1; i++) {
        if (isPrime(a[i][0]) == true)
            cnt++;
        if (isPrime(a[i][n - 1]) == true)
            cnt++;
    }

    for (int j = 0; j <= n - 2; j++) {
        if (isPrime(a[0][j]) == true)
            cnt++;
        if (isPrime(a[m - 1][j]) == true)
            cnt++;
    }
    cout << cnt;
    return 0;
}
