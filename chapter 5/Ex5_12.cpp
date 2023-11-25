#include <iostream>

using namespace std;

void fibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    cout << "Fibonacci numbers from 0 to " << n << ":" << endl;
    cout << fib[0] << " ";

    if (n > 0) {
        cout << fib[1] << " ";
    }

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
