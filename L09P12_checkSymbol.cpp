#include <iostream>
using namespace std;
bool checkSym(char s[], int i, int j) {
    if (i >=  j)
        return true;
    if (s[i] == s[j])
        return checkSym(s, i + 1, j - 1);
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    char s[100001];
    cin.ignore();
    cin.getline(s, 100001);
    if (checkSym(s, 0, n - 1)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
