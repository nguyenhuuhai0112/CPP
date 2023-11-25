#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // mo file de ghi
    ofstream file("bang_cuu_chuong.txt");

    if (!file.is_open())//file đuọc mở thành công sẽ trả về false và không mở được sẽ trả về true 
    {
        return 1;
    }

    // luu bang cuu chương vào file
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            file << i << " x " << j << " = " << i * j << endl;
        }
        file << endl;
    }

    // dong  file ghi
    file.close();

    // mo file de doc
    ifstream readFile("bang_cuu_chuong.txt");

    if (!readFile.is_open()) {
        cout << "Kh�ng th? m? file �? �?c!";
        return 1;
    }

    // doc va in nd file ra man hinh
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    // ��ng file �?c
    readFile.close();

    return 0;
}

