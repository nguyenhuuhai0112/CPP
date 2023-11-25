#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << setw(7) << endl;
    }

    return 0;
}