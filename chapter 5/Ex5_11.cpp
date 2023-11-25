#include <iostream>
#include <string>
using namespace std;

string digit_to_word(int digit) {
  switch (digit) {
    case 0: return "zero";
    case 1: return "one";
    case 2: return "two";
    case 3: return "three";
    case 4: return "four";
    case 5: return "five";
    case 6: return "six";
    case 7: return "seven";
    case 8: return "eight";
    case 9: return "nine";
    default: return "N";
  }
}
void print_digits(int n) {

  if (n == 0) {
    cout << digit_to_word(n) << endl;
    return;
  }

  string result = "";

  while (n > 0) {
   
    int last_digit = n % 10;
  
    result = digit_to_word(last_digit) + " " + result;

    n = n / 10;
  }

  cout << result << endl;
}
int main() {
 
  int n;

  cout << "Enter a natural number: ";

  cin >> n;

  if (n < 0) {
    cout << "Invalid input. Please enter a natural number." << endl;
    return -1;
  }

  print_digits(n);

  return 0;
}
