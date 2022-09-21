#include <iostream>
using namespace std;
int main ()
{
    //Đầu tiên ta khởi gán highest bằng -1 và lowest bằng 11. Mục đích ta khởi gán highest bằng -1 là do điểm số luôn lớn hơn bằng 0. Chính vì vậy ta luôn tìm được học sinh có điểm lớn hơn highest
    //Đối với lowest cũng tương tự

    int highest = -1;
    int lowest = 11;

    int x;

    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        if (highest < x) {
            highest = x;
        }
        if (lowest > x) {
            lowest = x;
        }
    }
    cout << highest << ' ' << lowest;
    return 0;
}
