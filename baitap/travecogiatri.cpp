#include <iostream>
#include <algorithm>

using namespace std;

void print()
{
    cout << "Cut Ngay!";
    
    
}
// int sum(int a, int b)
// {
//     int s;
//     s = a + b;

//     return s;
// }
void SapXep(int n, int arr[])
{
    sort(arr, arr + n);
}
int main()
{
    int choice;
    
    cout << "     MENU            " << endl;
    cout << "    1>sap xep mang   " << endl;
    cout << "    2> chen mang     " << endl;
    cout << "    3> End           " << endl;
    cout << "choice ( 1 - 5 ): " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "sap xep mang";
        
        // int n;
        // int arr[100];
        // cin >> n;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }
        // sort(arr[100], n);
        

        // cout<<"cac phan tu mang sau khi sap xep"<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        //     }

        break;
    case 2:
        cout << "chen mang" << endl;
        break;
    case 3:
        cout << "end" << endl;
        break;

    default:
        cout << "lua chon cua ban khong hop le!" << endl;
        break;
    }
    
    
    return 0;
}