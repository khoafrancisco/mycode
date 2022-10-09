#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int n;
    char ls[8] = {'B', 'b', 'I', 'i', 'G', 'g', 'O', 'o'};
    char mystr[1001];
    cin.getline(mystr, 1001);

    bool flag = false;
    for (int i = 0; i < strlen(mystr); i++)
        for (int j = 0; j < 8; j++)
    if (mystr[i] == ls[j]) {
        flag = true;
        break;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO";
    return 0;
}
