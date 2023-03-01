#include <iostream>
#include <string>

#include "../include/High_Precision"

using namespace std;
using namespace ptc;

int main()
{
    High_Precision<int(1e4)> a, b;
    cin >> a >> b;
    cout << a * b;
}
