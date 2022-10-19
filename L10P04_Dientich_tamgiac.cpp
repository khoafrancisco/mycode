// Tinh tong dien tich cac tam giac

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Point {
    int x, y;
};

double dist(Point A, Point B) {
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main() {
    int n;
    double res = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y;
        double p;
        cin >> x >> y;
        Point A, B, C;
        A.x = x;
        A.y = y;
        cin >> x >> y;
        B.x = x;
        B.y = y;
        cin >> x >> y;
        C.x = x;
        C.y = y;
        double AB = dist(A, B);
        double BC = dist(B, C);
        double AC = dist(A, C);
        p = (AB + BC + AC) / 2;
        double area = sqrt(p * (p - AB) * (p - AC) * (p - BC));
        res += area;
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}
