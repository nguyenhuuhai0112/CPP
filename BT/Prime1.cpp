#include <iostream>
#include <cmath>
using namespace std;

bool KiemTraSNT(int n)
{

    bool KiemTra = true; // đặt cờ hiệu !!!!!!
    if (n < 2)
    {
        KiemTra = false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            KiemTra = false;
        }
        else
        {
            for (int i = 2; i <= n - 1; i++)
            {
                if (n % i == 0)
                {
                    KiemTra = false;
                    break;
                }
            }
        }
    }
    return KiemTra;
}
int main()
{
    int n;
    cin >> n;
    if (KiemTraSNT(n) == true)
    {
        cout << "la so nguyen to!";
    }
    else
    {
        cout << "khong phai la so nguyen to!";
    }
    return 0;
}