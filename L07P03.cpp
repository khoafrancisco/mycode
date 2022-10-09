#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char s[1001];
    cin.getline(s, 1001);

    char res[1001];
    int resLen = 0;
    bool needASpace = false;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            if (resLen > 0) {
                needASpace = true;
            }
        }
        else {
            if (needASpace) {
                res[resLen] = ' ';
                resLen++;
                res[resLen] = s[i];
                resLen++;
                needASpace = false;
            }
            else {
                res[resLen] = s[i];
                resLen++;
            }
        }
    }
    res[resLen] = '\0';
    cout << res;
    return 0;
}
