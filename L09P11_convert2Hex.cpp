#include <iostream>
using namespace std;
char convert2Hex(int n) {
    if (n < 10)
        return '0' +  n;
    return 'A' + n - 10;
}
void f(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    if (n / 16 > 0) f(n / 16);
    cout << convert2Hex(n % 16);
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}
