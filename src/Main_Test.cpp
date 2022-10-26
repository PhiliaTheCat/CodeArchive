#include <iostream>

#include "../include/Complex"

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex res1(a, b);
    Complex res2(c, d);
    res1 -= res2;
    cout << res1;
}