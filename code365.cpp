#include <iostream>

using namespace std;

int main()
{
    int a = 7, b = 5;
    cout << "Numbers:\na = " << a << "\tb = " << b;
    if ((a ^ b) == 0)
        cout << "\nMagic recipe works!";
    else
        cout << "\nThe spell says the numbers are not equal :(";
    return 0;
}