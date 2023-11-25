#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double degree;
    cout << "Nhap do cua mot goc: ";
    cin >> degree;

    double radian = degree * M_PI / 180.0;
    double sin_value = sin(radian);
    double cos_value = cos(radian);
    double tan_value = tan(radian);
    double cot_value = 1.0 / tan_value;

    cout << "Sin(" << degree << ") = " << sin_value << endl;
    cout << "Cos(" << degree << ") = " << cos_value << endl;
    cout << "Tan(" << degree << ") = " << tan_value << endl;
    cout << "Cot(" << degree << ") = " << cot_value << endl;

    return 0;
}

