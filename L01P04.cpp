#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float math, science, english;
    cin >> math >> science >> english;
    float total = math + science + english;
    cout << fixed << setprecision(2) << total;
    return 0;
}

