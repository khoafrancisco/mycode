#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = -1;
    for (int i = 0; i < n; i++)
        if (a[i] > ans)
            ans = a[i];
    cout << ans;
    return 0;
}
