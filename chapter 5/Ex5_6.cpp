#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Natural numbers from " << n << " to 1: ";

    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

