#include <iostream>

#include "../include/Modulus"

using namespace std;

int main()
{
    int x = 10;
    Modulus<10> a = Modulus<10>(x);
    for (int i = 0; i < 10; i += 1)
    {
        cout << a << endl;
        a -= 1;
    }
}
