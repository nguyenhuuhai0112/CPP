#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Cac phan tu cua mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float avg = sum / n;
    cout << "Gia tri trung binh cua cac phan tu la: " << avg << endl;
    return 0;
}
