
#include <iostream>
using namespace std;

int main() {
    int m, n, a[1000][1000];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int maxEven = 0;
    int index = -1;

    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0)
                cnt += 1;
        }
        if (cnt > maxEven) {
            index = i;
            maxEven = cnt;
        }
    }
    cout << index;
    return 0;
}
