#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char s[1001];
    cin.getline(s, 1001);

    int countNum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ('0' <= s[i] && s[i] <= '9')
            countNum++;
    }
    cout << countNum;
    return 0;
}
