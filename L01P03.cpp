#include<iostream> //Khai báo sử dụng thư viện cho việc nhập xuất dữ liệu

using namespace std;    //khai báo sử dụng không gian tên (namespace) std
int main()  // Hàm main nơi bắt đầu chương trình
{
    int birth_year;     // khai báo biến chứa hàm năm sinh
    cin >> birth_year;  // đọc dữ liệu vào biến
    int age = 2022 - birth_year;    //tính tuổi của năm hiện tại cho năm sinh đó
    cout << age;    // xuất tuổi tính được ra màn hình
    return 0;

}


