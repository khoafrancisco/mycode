#include <iostream>
using namespace std;

int gcd(int x, int y) {
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
     return x;
}

void reduceFraction(int nu1, int de1, int &nu2, int &de2)
{
    int x = gcd(nu1, de1);
    nu2 = nu1 / x;
    de2 = de1 /x;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    reduceFraction(a, b, c, d);
    cout << c << " " << d;
    return 0;
}
