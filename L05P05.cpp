#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int x) {
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(a[i]))
            cnt++;
    cout << cnt;
    return 0;
}
