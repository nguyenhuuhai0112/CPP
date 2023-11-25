#include <iostream>

using namespace std;

int main()
{
    int m, n;
    
    cin >> m;
    cin >> n;

    cout << "Armstrong numbers from " << m << " and " << n << " are: ";

    for (int i = m; i <= n; i++)
    {
        int num = i;
        int sum = 0;

        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }

        if (i == sum)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

