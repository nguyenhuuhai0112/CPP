#include <iostream>

using namespace std;

int calculateSum(int k) {
    return (k * (k + 1)) / 2;
}

int main() {
    int n;

    //nhap mot so nguyen duong
    cin >> n;

    if (n <= 0) {
        cout << "N" << endl;
        return 0;
    }

    int k = 1;
    int sum = 0;

    while (sum <= n) {
        sum = calculateSum(k);
        if (sum <= n) {
            k++;
        }
    }

    cout << "so nguyen duong lon nhat K sao cho S(K) <= n la: " << k - 1 << endl;

    return 0;
}

