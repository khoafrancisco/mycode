#include <iostream>
#include <cstring>

using namespace std;
int pos(char ch) {
    if ('A' <= ch && ch <= 'Z')
        return ch - 'A';
    return ch - 'a';
}

char getMinimumOccurringChar(string s) {
    int count [26] = {0};

    for (int i = 0; i < s.length(); i++)
        count[pos(s[i])]++;

    int min = 1001;
    char res;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0 && count[i] < min) {
            min = count[i];
            res = i + 'A';
        }
    }
    return res;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        cout << getMinimumOccurringChar(s) << endl;
    }
    return 0;
}
