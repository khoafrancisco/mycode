#include <iostream>     // khai báo sử dụng thư viện cho việc nhập xuất dữ liệu

using namespace std;    // khai báo sử dụng không gian tên (namespace) std

int main()      // hàm main nơi bắt đầu chương trình
{
    int a, b, c;       // khai báo các biến cần sử dụng cho chương trình
    cin >> a >> b;      // đọc vào dữ liệu của hai biến a và b
    c = a + b;          // tính tổng của a và b sau đó gán vào biến c
    cout << a << " + " << b << " = " << c;
    return 0;
}
