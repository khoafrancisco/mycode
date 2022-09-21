#include <iostream>
using namespace std;
int main()
{
    bool res = true;
    int cur, pre = 0;
    while (true) {
        cin >> cur;
        if (cur == 0) break;
        if (cur < pre) {
            res = false;
            break;
        }
        pre = cur;
    }
    if (res) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
