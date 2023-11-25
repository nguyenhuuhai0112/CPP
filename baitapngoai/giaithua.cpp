#include <iostream>
using namespace std;

bool is_factorial(int num)
{
    int factorial = 1;
    int i = 1;

    // Tính giai thừa cho đến khi nào vượt quá số num
    while (factorial <= num)
    {
        if (factorial == num)
        {
            return true;
        }
        i++;
        factorial *= i;
    }

    return false;
}

int main()
{
    int num;
    cout << "Nhập số cần kiểm tra: ";
    cin >> num;

    // Kiểm tra xem số có phải là số giai thừa hay không
    if (is_factorial(num))
    {
        cout << num << " là số giai thừa." << endl;
    }
    else
    {
        cout << num << " không phải là số giai thừa." << endl;
    }

    return 0;
}
