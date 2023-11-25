#include<iostream>
#include<cMath>
using namespace std;
 
int main()
{
    int n;  
    cin >> n;
 
    bool isPrime = true;
 

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        
        for (int i = 2; i <= sqrt(n); i++) {
            
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
 
    if (isPrime) {
        cout << n << " is a prime number!" << endl;
    }
    else {
        cout << n << " is not a prime number!" << endl;
    }
 
    return 0;
}