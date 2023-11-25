
#include<iostream>

int main() {
    int term1 = 0, term2 = 1, nextTerm = 0;
    
    std::cout << "Fibonacci Series with terms <= 1000: ";
    std::cout << term1 << ", " << term2 << ", ";

    while (nextTerm <= 1000) {
        nextTerm = term1 + term2;
        if (nextTerm <= 1000)
            std::cout << nextTerm << ", ";
        term1 = term2;
        term2 = nextTerm;
    }
    
    return 0;
}


 
