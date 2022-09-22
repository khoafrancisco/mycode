#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < int(sqrt(n)) + 1; i++)
        if (n % i == 0) return false;
    return true;
}
int main()
{
    int n;
    cin >> n;

    int n1, n2;
    n1 = n2 = n;

    while (!isPrime(n1)) n1--;
    while (!isPrime(n2)) n2--;

    if (n - n1 < n2 - n)
        cout << n1;
    else
        cout << n2;
    return 0;
}
