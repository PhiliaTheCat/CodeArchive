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

Complex::Complex(Complex &tar)
{
    __a = tar.__a;
    __b = tar.__b;
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

Complex Complex::operator +(double sec)
{
    double a = __a + sec;
    double b = __b;
    Complex res(a, b);
    return res;
}

Complex operator +(double fst, Complex sec)
{
    double a = fst + sec.__a;
    double b = sec.__b;
    Complex res(a, b);
    return res;
}

void Complex::operator +=(Complex sec)
{
    __a += sec.__a;
    __b += sec.__b;
}

void Complex::operator +=(double sec)
{
    __a += sec;
}

Complex Complex::operator *(Complex sec)
{
    double a = __a * sec.__a - __b * sec.__b;
    double b = __a * sec.__b + __b * sec.__a;
    Complex res(a, b);
    return res;
}

Complex Complex::operator *(double sec)
{
    double a = __a * sec;
    double b = __b * sec;
    Complex res(a, b);
    return res;
}

Complex operator *(double fst, Complex sec)
{
    double a = sec.__a * fst;
    double b = sec.__b * fst;
    Complex res(a, b);
    return res;
}

void Complex::operator *=(Complex sec)
{
    double a = __a * sec.__a - __b * sec.__b;
    double b = __a * sec.__b + __b * sec.__a;
    __a = a;
    __b = b;
}

void Complex::operator *=(double sec)
{
    __a *= sec;
    __b *= sec;
}

ostream &operator <<(ostream &tar, Complex sample)
{
    tar << sample.__a << " + " << sample.__b << 'i';
    return tar;
}

Complex::~Complex()
{

}
