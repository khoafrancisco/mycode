
#include <iostream>
using namespace std;
int main() {
    int m, n, a[1000][1000];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > 100)
                cnt++;
    cout << cnt;
    return 0;
}
