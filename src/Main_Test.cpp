#include <iostream>

#include "../include/Complex"

using namespace std;
using namespace ptc;

int main()
{
    Complex x = Complex(-3, 1.4);
    double a = x.re();
    a = 13;
    cout << a << endl;
    cout << x.re() << endl;
}
