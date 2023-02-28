#include <iostream>
#include <string>

#include "../include/High_Precision"

using namespace std;
using namespace ptc;

int main()
{
    High_Precision<int(1e5)> a;
    cin >> a;
    cout << ((+a) = a + 1) << endl;
    cout << a + 12 << endl;
    cout << 12 + a << endl;
    cout << a + a << endl;
}
