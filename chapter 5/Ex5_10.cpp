#include <iostream>

using namespace std;

int main()
{
    int n, reversedN = 0, originalN;

    cin >> n;

    originalN = n;

    while (n > 0)
    {
        int digit = n % 10;
        reversedN = reversedN * 10 + digit;
        n /= 10;
    }

    if (originalN == reversedN)
    {
        cout << originalN << " is a palindrome number" << endl;
    }
    else
    {
        cout << originalN << " is not a palindrome number" << endl;
    }

    return 0;
}

