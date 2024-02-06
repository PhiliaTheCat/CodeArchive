#include <iostream>

#include "../include/Math/High_Precision"

using namespace std;

int main()
{
    ptc::High_Precision<> a = 114514;
    cout << (a >= a + 1) << endl;
    return 0;
}
