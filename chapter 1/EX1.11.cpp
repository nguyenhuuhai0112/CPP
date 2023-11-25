#include <iostream>
using namespace std;

int main() {

    float side;
    cout << "Enter the side length of the square ";
    cin >> side;

    float area = side * side;
    float perimeter = 4 * side;

    cout << "Enter the side length of the square: " << area << endl;
    cout << "The perimeter of the square is: " << perimeter << endl;
    
 
    return 0;

}

