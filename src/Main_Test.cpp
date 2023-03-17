#include <iostream>

#include "../include/High_Precision"

using namespace std;
using namespace ptc;

template<int Cap> bool cmp(const Modulus<Cap> &l, const Modulus<Cap> &r);

int main()
{
    High_Precision a, b;
    cin >> a >> b;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
}
