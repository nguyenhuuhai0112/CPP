#include<iostream>
using namespace std;
    int Tong(int a, int b){
        return a+b;
    }
    int Hieu(int a, int b){
        if (a > b)
        return a-b;
        else
        return b-a;
    }
    float Tich(float a, float b){
        return a*b;
    }
    double Thuong(double a, double b){
        return a/b;
    }
    int main(){
        cout<<"========================="<<endl;
        cout<<"|          MENU         |"<<endl;
        cout<<"|=======================|"<<endl;
        cout<<"|       1> TONG         |"<<endl;
        cout<<"|       2> HIEU         |"<<endl;
        cout<<"|       3> TICH         |"<<endl;
        cout<<"|       4> THUONG       |"<<endl;
        cout<<"|       5> KET THUC     |"<<endl;
        cout<<"========================="<<endl;
            int n;
            cout<<"Hay Lua Chon(1-5): ";
            cin>>n;
                switch(n){
            case 1:
                cout<<"Ban chon phuong thuc tong!"<<endl;
                int x,y;
                cin>>x>>y;
                cout<<Tong(x,y)<<endl;
                break;
            case 2:
                cout<<"Ban chon phuong thuc hieu!"<<endl;
                int z,w;
                cin>>z>>w;
                cout<<Hieu(z,w)<<endl;
                break;
            case 3:
                cout<<"Ban chon phuong thuc tich!"<<endl;
                float u,v;
                cin>>u>>v;
                cout<<Tich(u,v)<<endl;
                break;
            case 4:
                cout<<"Ban chon phuong thuc thuong!"<<endl;
                double p,q;
                cin>>p>>q;
                cout<<Thuong(p,q)<<endl;
                break;
            case 5:
                cout<<"Ket Thuc Chuong Trinh"<<endl;
                break;
            default :
                cout << "Lua Chon Cua Ban Khong Hop Le!"<<endl;
                break;
                }
    return 0;
    }

