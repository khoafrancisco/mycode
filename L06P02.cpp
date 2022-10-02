#include <iostream>

using namespace std;
bool isAllNegatives(int a[1000][1000], int m, int col) {
    bool flag = true;
    for (int i = 0; i < m; i++) {
        if (a[i][col] >= 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main () {
    int m, n, a[1000][1000];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        if (isAllNegatives(a, m, j)) {
            cout << j << ' ';
        }
    }
    return 0;
}
