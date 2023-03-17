#include <iostream>

#include "../include/High_Precision"

using namespace std;
using namespace ptc;

int main()
{
    High_Precision a, b;
    cin >> a >> b;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
}
