#include <iostream>
using namespace std;

struct Element {
    int x;
    int y;
    int val;
};

int main() {
    int n, m, k;
    Element B[1000];

    cin >> n >> m;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> B[i].x >> B[i].y >> B[i].val;
    }
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        if (B[i].val > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < k; i++) {
        if (B[i].val > 0) {
            cout << B[i].x << " " << B[i].y << endl;
        }
    }
}
