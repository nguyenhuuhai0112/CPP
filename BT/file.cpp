#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Mở file để ghi
    ofstream file("bang_cuu_chuong.txt");

    if (!file.is_open()) {
        cout << "Không thể mở file để ghi!";
        return 1;
    }

    // Lưu bảng cửu chương vào file
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            file << i << " x " << j << " = " << i * j << endl;
        }
        file << endl;
    }

    // Đóng file ghi
    file.close();

    // Mở file để đọc
    ifstream readFile("bang_cuu_chuong.txt");

    if (!readFile.is_open()) {
        cout << "Không thể mở file để đọc!";
        return 1;
    }

    // Đọc và in nội dung file ra màn hình
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    // Đóng file đọc
    readFile.close();

    return 0;
}
