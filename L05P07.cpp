#include <iostream>
using namespace std;

int main()
{
    int n, a[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int boys = 0;
    int girls = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            boys++;
        }
        else {
            girls++;
        }
    }

    if (boys == girls)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
