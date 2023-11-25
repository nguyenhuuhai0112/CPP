#include <iostream>
using namespace std;

bool is_palindrome(int num)
{
    int reversedNum = 0;
    int originalNum = num;

    // Đảo ngược số
    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Kiểm tra xem số có đối xứng hay không
    if (originalNum == reversedNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Nhập số cần kiểm tra: ";
    cin >> num;

    // Kiểm tra xem số có phải là số palindromic hay không
    if (is_palindrome(num))
    {
        cout << num << " là số palindromic." << endl;
    }
    else
    {
        cout << num << " không phải là số palindromic." << endl;
    }

    return 0;
}
