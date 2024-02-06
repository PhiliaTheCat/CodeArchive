#include <iostream>

#include "../include/Math/High_Precision"

using namespace std;

int main()
{
    ptc::High_Precision<> a = 114514;
    ptc::High_Precision<> b;
    cout << (a + 1 == a) << endl
         << (+a == a) << endl
         << (&(b = +a) == &a) << endl;
    return 0;
}
