#include <iostream>
using namespace std;


int main() {
    int n, A[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    bool allPositive = true;
    for (int i = 0; i < n; i++)
        if (A[i] == 0) {
            allPositive = false;
            break;
        }
    if (allPositive == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
