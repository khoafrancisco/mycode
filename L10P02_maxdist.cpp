#include <iostream>
#include <math.h>
using namespace std;
struct Point {
    int x, y;
};

double dist(Point A, Point B) {
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}
int main() {
    int n;
    Point M, a[1000];
    cin >> M.x >> M.y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    int maxLen = 0;
    Point ans = M;
    for (int i = 0; i < n; i++) {
        int curLen = dist(M, a[i]);
        if (curLen > maxLen) {
            maxLen = curLen;
            ans = a[i];
        }
    }
    cout << ans.x << " " << ans.y;
    return 0;
}



/*Test
0 0 Goc toa do
3   Diem
1 1
1 2
1 0
*/
