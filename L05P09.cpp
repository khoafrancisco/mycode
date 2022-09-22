#include <iostream>
using namespace std;

int n, a[5005], b[5005];


int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int id  = 0;
    for (int i = 1; i < n; i++)
    if (a[id] < a[i] || (a[id] == a[i] && b[id] < b[i])) {
        id = i;
    }
        cout << id + 1;
    return 0;
}
