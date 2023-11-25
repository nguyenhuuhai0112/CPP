#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Khai báo các bi?n
    int x = 100, y = 100;
    int dx = 0, dy = 0;
    int score = 0;

    // V? màn h?nh
    system("cls");
    cout << "Ði?m: " << score << endl;
    cout << "Nh?n phím m?i tên ð? di chuy?n" << endl;

    // V?ng l?p chính
    while (true)
    {
        // Xóa màn h?nh
        system("cls");

        // V? nhân v?t
        cout << "@" << endl;

        // V? chý?ng ng?i v?t
        for (int i = 0; i < 10; i++)
        {
            cout << "#" << endl;
        }

        // Di chuy?n nhân v?t
        x += dx;
        y += dy;

        // Ki?m tra va ch?m
        if (x < 0 || x > 80)
        {
            cout << "Game over!" << endl;
            break;
        }
        if (y < 0 || y > 24)
        {
            cout << "Game over!" << endl;
            break;
        }

        // Tãng ði?m
        score++;

        // Hi?n th? ði?m
        cout << "Ði?m: " << score << endl;

        // Ng? 100 mili giây
        Sleep(100);
    }

    // Tr? v? 0
    return 0;
}
