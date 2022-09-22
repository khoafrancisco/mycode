#include <iostream>
using namespace std;
int find_reversion(int n) {
    int ans = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main ()
{
    int n;
    cin >> n;

    if (find_reversion(n) == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
