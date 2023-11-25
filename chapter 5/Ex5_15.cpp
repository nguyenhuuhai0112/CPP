#include <iostream>

using namespace std;
//LOD is largestOddDivisor
//LO is largestOdd
int LOD(int number) {
    for (int i = number; i >= 1; i--) {
        if (number % i == 0 && i % 2 != 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;

    cin >> n;

    int LO = LOD(n);

    if (LO != -1) {
        cout << "uoc so le lon nhat cua " << n << " la " << LO << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}

