#include <iostream>

#include "../include/Math/Modulus"

using namespace std;
using namespace ptc;

int main()
{
    Modulus<11> a(-1);

    for (int i = 0; i < 10; i += 1)
    {
        cout << a << endl;

        a *= Modulus<11>(10);
    }

    return 0;
}
