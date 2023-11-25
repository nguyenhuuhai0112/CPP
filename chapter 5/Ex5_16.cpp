#include <iostream>
#include <vector>

using namespace std;

//oddDigits is OD
void OD(int number) {
    vector<int> odd;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            odd.push_back(digit);
        }
        number /= 10;
    }

    if (odd.empty()) {
        cout << "N" << endl;
    } else {
        cout << "cac chu so le cua so la: ";
        for (int i = odd.size() - 1; i >= 0; i--) {
            cout << odd[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    //nhap so nguyen duong
    cin >> n;

    OD(n);

    return 0;
}

