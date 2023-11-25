#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;
int main()
{
    int arr[100];
    int i, n;
    for (i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < 100; i++)
    {
        cout << arr[i] << setw(7) endl;
    }
    cout << endl
         << arr[77];
    return 0;
}