#include <iostream>

using namespace std;

int main() {
    int N;
    int total = 0;

    cout << "Enter the value N: ";
    cin >> N;

    for (int i = 1; i <= N; i += 2) {
        total += i;
    }

    cout << "The total number of this day is: " << total << endl;

    return 0;
}

