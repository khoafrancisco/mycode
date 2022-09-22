#include <iostream>
using namespace std;


int main()
{
    int n;
    int h[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int minH = 1001;
    for (int i = 0; i < n; i++) {
        if (h[i] < minH)
            minH = h[i];
    }
    int energy = 0;
    for (int i = 0; i < n; i++)
        energy = energy + (h[i] - minH);

    cout << energy;
    return 0;
}
