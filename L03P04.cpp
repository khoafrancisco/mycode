#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    int n;
    cin >> n;
    bool isPrime = true;
    if (n < 2)
        isPrime = false;
    for (int i = 2; i < int(sqrt(n)) + 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
