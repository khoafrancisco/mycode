#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double P = a + b + c;
    double p = (a + b + c) / 2;
    double S = pow(p * (p - a) * (p - b) * (p - c), 0.5);
    cout << fixed << setprecision(2) << P << " " << S << endl;
    return 0;
}
