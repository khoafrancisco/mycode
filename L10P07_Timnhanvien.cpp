#include <iostream>
#include <string.h>

using namespace std;
struct Staff {
    char id[7];
    char name[11];
    int birthYear;
};

int main() {
    int n;
    Staff staffs[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> staffs[i].id >> staffs[i].name >> staffs[i].birthYear;
    }

    Staff oldestStaff = staffs[0];
    for (int i = 1; i < n; i++) {
        if (staffs[i].birthYear < oldestStaff.birthYear || (staffs[i].birthYear == oldestStaff.birthYear && strcmp(staffs[i].id, oldestStaff.id) < 1))
            oldestStaff = staffs[i];
    }
    cout << oldestStaff.id << " " << oldestStaff.name << " " << oldestStaff.birthYear;
}
