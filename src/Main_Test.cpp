#include <iostream>

#include "../include/Math/High_Precision"

using namespace std;

int main()
{
    ptc::High_Precision<8> l = 0x80;
    cout << l << endl;
    return 0;
}
