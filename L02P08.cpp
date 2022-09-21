#include <iostream>
using namespace std;

int main() {
    int candy1, candy2, candy3, candy4;
    cin >> candy1 >> candy2 >> candy3 >> candy4;

    int maxCandy = candy1;
    if (maxCandy < candy2) {
        maxCandy = candy2;
    }
    if (maxCandy < candy3) {
        maxCandy = candy3;
    }
    if (maxCandy < candy4) {
        maxCandy = candy4;
    }

    cout << maxCandy;
    return 0;
}
