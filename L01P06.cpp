#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float radius;
    cin >> radius;
    float PI = 3.14;
    float P = 2 * radius * PI;
    float S = pow(radius, 2) * PI;
    cout << fixed << setprecision(2);
    cout << P << endl;
    cout << S << endl;
    return 0;
}
