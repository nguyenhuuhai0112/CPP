#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Khai b�o c�c bi?n
    int x = 100, y = 100;
    int dx = 0, dy = 0;
    int score = 0;

    // V? m�n h?nh
    system("cls");
    cout << "�i?m: " << score << endl;
    cout << "Nh?n ph�m m?i t�n �? di chuy?n" << endl;

    // V?ng l?p ch�nh
    while (true)
    {
        // X�a m�n h?nh
        system("cls");

        // V? nh�n v?t
        cout << "@" << endl;

        // V? ch�?ng ng?i v?t
        for (int i = 0; i < 10; i++)
        {
            cout << "#" << endl;
        }

        // Di chuy?n nh�n v?t
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

        // T�ng �i?m
        score++;

        // Hi?n th? �i?m
        cout << "�i?m: " << score << endl;

        // Ng? 100 mili gi�y
        Sleep(100);
    }

    // Tr? v? 0
    return 0;
}
