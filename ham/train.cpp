#include <iostream>
using namespace std;
void SoSanh(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {

        max = b;
    }
    cout << max << endl;
}
int Tong(int c, int d)
{
    int sum = c + d;
    return sum;
}
int Hieu(int e, int f)
{
    if (e > f)
    {
        return e - f;
    }
    else
    {
        return f - e;
    }
}
int main()
{
    int a, b;

    cin >> a >> b;

    cout << Hieu(a, b) << endl;

    cout << Tong(a, b) << endl;

    SoSanh(a, b);

    return 0;
}
