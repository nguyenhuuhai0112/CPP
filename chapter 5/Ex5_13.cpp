#include <iostream>

using namespace std;

int main() {
    int m, n;

    // nhap m va n
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
