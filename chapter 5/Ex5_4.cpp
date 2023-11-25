#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "Gia tri cua bieu thuc la: " << sum;

    return 0;
}


