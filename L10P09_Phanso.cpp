#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct PhanSo {
    int nu;
    int de;
};

PhanSo reduce(PhanSo P) {
    int c = gcd(P.nu, P.de);
    P.nu /= c;
    P.de /= c;
    return P;
}


int main() {
    int n;
    PhanSo lst[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> lst[i].nu >> lst[i].de;
    }

    PhanSo ans = lst[0];
    for (int i = 1; i < n; i++) {
        if (ans.nu * lst[i].de - lst[i].nu * ans.de < 0) {
            ans = lst[i];
        }
    }
    ans = reduce(ans);
    cout << ans.nu << " " << ans.de;

}
