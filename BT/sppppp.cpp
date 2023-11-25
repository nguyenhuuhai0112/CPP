#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ctype.h>
#include <fstream>
#include <conio.h>
using namespace std;

int main() {
    int chon;
    char hoi;
    string name;
    fstream f;
    int n,temp,s=0,co = 1;

    do{
        f.open("c:\\test\\test.txt",ios::out|ios::app);
        if(!f.is_open()){
            cout<<'N';
            exit(0);
        }

        cout<<"Menu"<<endl;
        cout<<"1. Armstron"<<endl;
        cout<<"2. Perfect Number"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Select to function:";
        cin>>chon;

        switch(chon){
            case 1:
                //cout<<"1. Armstrong";
                cout<<"Input n:";
                cin>>n;
                if(n < 0){
                    cout<<'N';
                    exit(0);
                }
                temp = n;
                while(temp != 0){
                    s = s + pow(temp%10,3);
                    temp = temp/10;
                }
                if(s != n)
                    co = 0;
                if(co == 1)
                    //cout<<"Armstrong !";
                    f<<"Armstrong"<<endl;
                else
                    //cout<<"Not Armstrong !";
                    f<<"Not Armstrong"<<endl;
                f.close();

                getch();
                system("cls");
                break;
            case 2:
                cout<<"2. Perfect Number";
                getch();
                system("cls");
                f<<"2. Perfect Number"<<endl;
                f.close();
                break;
            case 3:
                cout<<"3. Exit";
                getch();
                system("cls");
                break;
            default:
                cout<<"Not valid !";
        }

    }while(chon != 3);

    f.close();
}
