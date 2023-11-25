#include <iostream>

using namespace std;

int main()
{
    int ascii_code;

    for (ascii_code = 48; ascii_code <= 127; ascii_code++)
    {
        cout << "Ma ASCII " << ascii_code << " tuong ung voi ki tu " << char(ascii_code) << endl;
    }

    return 0;
}

