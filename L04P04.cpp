#include <iostream>
using namespace std;

int countDigit(int n) {
    int ans = 0;
    while (n > 0) {
        n = n / 10;
        ans++;
    }
    return ans;
}


int main ()
{
    int n;
    cin >> n;
    cout << countDigit(n);
    return 0;
}
