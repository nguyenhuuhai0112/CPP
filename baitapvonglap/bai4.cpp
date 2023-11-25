/*Nhập vào n nguyên dương, tính và in tổng sau ra màn hình, chú ý lấy tới 3
số sau dấu thập phân.
S=1+1/2+1/3+1/4+….+1/n */
#include<iostream>
#include<iomanip>
using namespace std;
    int main(){
        int n,i;
        double s=0;
        cin>>n;
        for ( i = 1; i <= n; i++)
        {
            s += 1.0 / i;
        }
        cout<<"sum: "<< setprecision(3) << fixed << s <<endl;
        // setprecision(3) để lấy tới 3 số sau dấu phẩy, fixed để hiển thị số thập phân cố định
    return 0;    
    }

