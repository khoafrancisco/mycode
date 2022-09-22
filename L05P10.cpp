#include <iostream>
using namespace std;

int main ()
{
    int a[24], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (a[n - 1] == 0) {
        cout << "NO";
    }
    else {
        bool isGood = true;
        for (int i = 0; i < n - 3; i++) {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2] && a[i + 2] == a[i + 3] && a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0) {
                isGood = false;
                break;
            }
        }
        if (isGood)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
