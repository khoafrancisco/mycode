#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int x, t;
    double a;
    cin >> x >> a >> t;
    double salary = x * a + t;
    cout << fixed << setprecision(2) << salary;
    return 0;
}
