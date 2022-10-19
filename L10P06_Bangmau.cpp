#include <iostream>
using namespace std;
struct Color {
    int sumLength = 0;
    int cnt = 0;

    void update(int newLength) {
        cnt++;
        sumLength += newLength;
    }
};

void update(Color &c, int newLength) {
    c.cnt++;
    c.sumLength += newLength;
}

int main() {
    int n;
    Color colors[1001];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p, l;
        cin >> p >> l;
        update(colors[p], l);
    }

    int differentColors = 0;
    for (int i = 1; i <= 1000; i++) {
        if (colors[i].cnt > 0) {
            differentColors++;
        }
    }
    cout << differentColors << endl;
    for (int i = 1; i <= 1000; i++) {
        if (colors[i].cnt > 0) {
            cout << i << " " << colors[i].sumLength << " " << colors[i].cnt << endl;
        }
    }
}
