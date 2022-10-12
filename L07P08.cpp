// Bai toan dao cau
#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char s[1001];
    char words[1000][1001];

    cin.getline(s, 1001);
    int n = strlen(s);
    int cnt = 0;    // Biến con trỏ điếm số lượng từ
    int j = 0;      // Biến con trỏ tới vị trí hiện tại trong tư đang xây dựng
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            words[cnt][j] = s[i];
        j++;
        } else {
            // Da xong mot tu
            words[cnt][j] = '\0';
            cnt++;  // Tu tang len mot
            j = 0;  // Reset ve 0
        }
    }
    if (j != 0) {
        // Neu van con dang xay dung dang do 1 tu
        words[cnt][j] = '\0';
        cnt++;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    return 0;
}
