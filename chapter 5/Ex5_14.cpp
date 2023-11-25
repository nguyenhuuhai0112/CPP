#include<iostream>
#include<cmath>
using namespace std;
bool Armstrong(int number) {
    int temp = number;
    int NOD = 0;
    int sum = 0;

    while (temp != 0) {
        temp /= 10;
        NOD++;
    }

    temp = number;


    while (temp != 0) {
        int digit = temp % 10;      
        sum += pow(digit, NOD);
        temp /= 10;
    }

    if (sum == number) {
        return true;
    } else {
        return false;
    }
}
    bool Prime(int number) {
    if (number <= 1) {
        return false;
    } else if (number == 2) {
        return true;
    } else if (number % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

    int main(){
       
        int n;

        cout<<"**********************"<<endl;
        cout<<"*        MENU        *"<<endl;
        cout<<"*    1. Armstrong    *"<<endl;
        cout<<"*    2. Prime        *"<<endl;
        cout<<"*    3. Finish       *"<<endl;
        cout<<"**********************"<<endl;

        cout<<"choose (1,2,3) : "<<endl;

        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Armstrong!"<<endl;
                int number;
                cin >> number;
                     if (Armstrong(number)) {
                        cout << number << " la so Armstrong." << endl;
                     } else {
                             cout << number << " khong phai Armstrong." << endl;
                            }
            break;
        case 2:
        cout<<"Prime!"<<endl;
        cin >> number;

            if (Prime(number)) {
                cout << number << " la so nguyen to!" << endl;
            } else {
                    cout << number << " khong phai so nguyen to!" << endl;
                    }
            break;
        case 3:
        cout << "ban co muon ket thuc khong? (c/k)" << endl;
        char x;
        cin >> x;
        if (x=='c'){
            cout << "hen gap lai ban!";
        }
        else if (x == 'k'){
            exit(0);
        }
            break;
        default:
            cout << "xin loi, lua chon khong hop le!" << endl;
            break;
        }
    return 0;
    }
   