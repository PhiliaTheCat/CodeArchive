#include <iostream>
#include <cmath>

#include "../include/Complex"

using namespace std;

Complex::Complex()
{
    __a = 0;
    __b = 0;
}

Complex::Complex(double a, double b)
{
    __a = a;
    __b = b;
}

double Complex::mod()
{
    double x = pow(__a, 2);
    double y = pow(__b, 2);
    double res = pow(x + y, .5);
    return res;
}

Complex Complex::operator +(Complex sec)
{
    double a = __a + sec.__a;
    double b = __b + sec.__b;
    Complex res(a, b);
    return res;
}

Complex Complex::operator *(Complex sec)
{
    double a = __a * sec.__a - __b * sec.__b;
    double b = __a * sec.__b + __b * sec.__a;
    Complex res(a, b);
    return res;
}

ostream &operator <<(ostream &tar, Complex sample)
{
    tar << sample.__a << " + " << sample.__b << 'i';
    return tar;
}

Complex::~Complex()
{

}
