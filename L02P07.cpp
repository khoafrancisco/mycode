#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = b - a;

    int ans = 0;

    if (x <= 50) {
        ans = x * 1484;
    } else if (x <= 100) {
        ans = (50 * 1484 + (x - 50) * 1533);
    } else if (x <= 200) {
        ans = (50 * 1484 + 50 * 1533 + (x - 100) * 1786);
    } else if (x <= 300) {
        ans = (50 * 1484 + 50 * 1533 + 100 * 1786 + (x - 200) * 2242);
    } else if (x <= 400) {
        ans = (50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + (x - 300) * 2503);
    } else {
        ans = (50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + 100 * 2503 + (x - 400) * 2587);
    }

    ans = ans * 1.1;
    cout << ans;

    return 0;
}
