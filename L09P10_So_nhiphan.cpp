#include <iostream>
using namespace std;
void f(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    if (n / 2 > 0) f(n / 2);
    cout << n % 2;
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}
