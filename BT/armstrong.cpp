#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrongNumber(int number)
{
    int temp = number;
    int numOfDigits = 0;
    int sum = 0;

    while (temp != 0)
    {
        temp /= 10;
        numOfDigits++;
    }

    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, numOfDigits);
        temp /= 10;
    }

    if (sum == number)
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
    int number;

    cout << "nhap so: ";
    cin >> number;

    if (isArmstrongNumber(number))
    {
        cout << number << " la so Armstrong." << endl;
    }
    else
    {
        cout << number << " khong phai Armstrong." << endl;
    }

    return 0;
}
