#include <iostream>

#include "../include/Complex"

using namespace std;

int main()
{
    Complex a(1);
    Complex b(1, -1);
    cout << a / b;
}