#include <iostream>
using namespace std;
int main ()
{
    int x;
    int res = 0;
    while (true) {
        cin >> x;
        if (x == 0)
            break;
        if (x == 5)
            res++;
    }
    cout << res;
    return 0;
}
