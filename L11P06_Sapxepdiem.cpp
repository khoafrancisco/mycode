/*
Cho N sinh vien khac nhau, moi sinh vien gom ma so sinh vien va diem cua minh.
Hay tim k sinh vien co diem cao nhat trong N sinh vien nay
*/


#include <iostream>
#include <string.h>
using namespace std;

struct Student{
    int id;
    float point;
};

bool compare(Student a, Student b)
{
    return a.point > b.point || (a.point == b.point && a.id < b.id);
}

void merge(int n1, Student L[], int n2, Student R[], Student a[])
{
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2) {
        if (compare(L[i], R[j])) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int n, Student a[])
{
    Student L[501];
    Student R[501];

    if (n > 1) {
        int n1 = n / 2;
        int n2 = n - n1;

        for (int i = 0; i < n1; i++) {
            L[i] = a[i];
        }

        for (int i = 0; i < n2; i++) {
            R[i] = a[i + n1];
        }

        mergeSort(n1, L);
        mergeSort(n2, R);
        merge(n1, L, n2, R, a);
    }
}

int main() {
    int k, n;
    Student a[1000];
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].point;
    }
    mergeSort(n, a);

    for (int i = 0; i < k; i++) {
        cout << a[i].id << endl;
    }
}

