//yêu cầu số giờ làm việc của sáu nhân viên và lưu trữ các giá trị trong một mảng.
#include<iostream>
using namespace std;
    int main(){
        int hours[6];
        for ( int i = 0; i < 6 ; i++)
        {
            cout<< i + 1 <<": ";
            cin>> hours[i];
        }
        for (int i = 0; i < 6; i++)
        {
            cout<<"so gio lam cua nhan vien "<< i + 1 <<" la: "<<hours[i]<<"h"<<endl;
        }
    return 0;
    }