#include <iostream>

using namespace std;

int main()
{
    int n;
    int product = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    cout << "The product of the natural numbers from 1 to " << n << " is: " << product << endl;

    return 0;
}

