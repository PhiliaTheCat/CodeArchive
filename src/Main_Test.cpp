#include <iostream>

#include "../include/Complex"

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Complex A(a, b);
    Complex B(c, d);
    Complex C(e, f);
    Complex res = A + B + C;
    cout << res << endl;
}