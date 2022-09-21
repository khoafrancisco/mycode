#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << '*';
    cout << endl;
    for (int i = 2; i < n; i++) {
        cout << '*';
        for (int j = 2; j < n; j++)
            cout << ' ';
        cout << '*' << endl;
    }
    for (int i = 1; i <= n; i++)
        cout << '*';
    return 0;
}
