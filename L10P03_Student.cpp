#include <iostream>
#include <math.h>
using namespace std;
struct Student {
    char name[101];
    double math, lit;
};

double average(Student s) {
    return (s.math + s.lit) / 2;
}

int main() {
    int n;
    Student S[1000];

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin.getline(S[i].name, 101);
        cin >> S[i].math >> S[i].lit;
        cin.ignore();
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (average(S[i]) >= 9.0)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}
