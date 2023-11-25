#include <iostream>

using namespace std;

int calculateSum(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + calculateSum(n - 1);
  }
}

int main() {
  int n;
  cout << "nhap gia tri cua n: ";
  cin >> n;
  int sum = calculateSum(n);
  cout << "tong tu 1 den " << n << " la: " << sum << endl;
  return 0;
}
