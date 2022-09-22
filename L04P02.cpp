
#include <iostream>
using namespace std;
int solve(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i * i;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = solve(n);
    cout << result;
    return 0;
}
