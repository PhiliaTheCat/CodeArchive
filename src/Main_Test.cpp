#include <iostream>

#include "../include/Complex"

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    Complex c(a, b);
    cout << c << endl;
    cout << a << endl;
    cout << b << endl;
}