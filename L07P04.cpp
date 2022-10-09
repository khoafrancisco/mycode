#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        string res = "";

        for (int j = 0; j < s.length(); j++) {
            if (j == 0 || s[j - 1] == ' ')
                res += toupper(s[j]);
            else
                res += tolower(s[j]);
        }
        cout << res << endl;
    }
    return 0;
}
