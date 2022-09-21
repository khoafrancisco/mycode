#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 != 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
