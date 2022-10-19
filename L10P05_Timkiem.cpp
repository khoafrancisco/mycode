#include <iostream>
#include <string.h>
using namespace std;
struct Student {
    char id[7];
    double math;
    double literature;
};

int main() {
    Student students[1000];
    int n, q;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].math >> students[i].literature;
    }
    char id[7];
    for (int i = 0; i < q; i++) {
        cin >> id;
        for (int j = 0; j < n; j++) {
            if (strcmp(id, students[j].id) == 0) {
                cout << students[j].math << " " << students[j].literature << endl;
                break;
            }
        }
    }
}
