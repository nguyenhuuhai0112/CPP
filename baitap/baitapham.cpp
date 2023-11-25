// bai tap so sanh hai so co su dung ham
#include <iostream>
using namespace std;
int SoSanh(int a, int b)
{
    if (a > b)
    {

        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << SoSanh(a, b);
}