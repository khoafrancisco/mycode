// Dem ky tu phan biet
#include <iostream>
#include <cstring>
using namespace std;
int pos(char ch) {
    if ('A' <= ch && ch <= 'Z')
        return ch - 'A';
    return ch - 'a' + 26;
}

int main () {
    string s;
    getline(cin, s);
    int count[52] = {0};

    for (int i = 0; i < s.length(); i++)
    count[pos(s[i])]++;

    int cnt = 0;
    for (int i = 0; i < 52; i++)
        if (count[i] != 0)
            cnt++;

    cout << cnt;
}
