#include <iostream>
#include <cmath>

#include "../include/Complex"

namespace ptc
{
    Complex::Complex(const double &a, const double &b)
    : __a(a), __b(b)
    {}

    Complex::Complex(const Complex &tar)
    : __a(tar.__a), __b(tar.__b)
    {}

    Complex::~Complex()
    {}

    double Complex::modulus()
    {
        double x = pow(__a, 2);
        double y = pow(__b, 2);
        double res = sqrt(x + y);
        return res;
    }

    double &Complex::re()
    {
        return __a;
    }

    double &Complex::im()
    {
        return __b;
    }

    Complex &Complex::operator =(const Complex &tar)
    {
        __a = tar.__a;
        __b = tar.__b;
        return *this;
    }

    bool Complex::operator ==(const Complex &sec)
    {
        if (__a - sec.__a > 1e-12 || __a - sec.__a < -1e-12)
            return false;
        else if (__b - sec.__b > 1e-12 || __b - sec.__b < -1e-12)
            return false;
        return true;
    }

    Complex Complex::operator +()
    {
        return Complex(*this);
    }

    Complex Complex::operator +(const Complex &sec)
    {
        double a = __a + sec.__a;
        double b = __b + sec.__b;
        Complex res(a, b);
        return res;
    }

    Complex Complex::operator +(const double &sec)
    {
        double a = __a + sec;
        double b = __b;
        Complex res(a, b);
        return res;
    }

    Complex operator +(const double &fst, const Complex &sec)
    {
        double a = fst + sec.__a;
        double b = sec.__b;
        Complex res(a, b);
        return res;
    }

    Complex &Complex::operator +=(const Complex &sec)
    {
        __a += sec.__a;
        __b += sec.__b;
        return *this;
    }

    Complex &Complex::operator +=(const double &sec)
    {
        __a += sec;
        return *this;
    }

    Complex Complex::operator -()
    {
        double a = -__a;
        double b = -__b;
        Complex res(a, b);
        return res;
    }

    Complex Complex::operator -(const Complex &sec)
    {
        double a = __a - sec.__a;
        double b = __b - sec.__b;
        Complex res(a, b);
        return res;
    }

    Complex Complex::operator -(const double &sec)
    {
        double a = __a - sec;
        double b = __b;
        Complex res(a, b);
        return res;
    }

    Complex operator -(const double &fst, const Complex &sec)
    {
        double a = fst - sec.__a;
        double b = -sec.__b;
        Complex res(a, b);
        return res;
    }

    Complex &Complex::operator -=(const Complex &sec)
    {
        __a -= sec.__a;
        __b -= sec.__b;
        return *this;
    }

    Complex &Complex::operator -=(const double &sec)
    {
        __a -= sec;
        return *this;
    }

    Complex Complex::operator *(const Complex &sec)
    {
        double a = __a * sec.__a - __b * sec.__b;
        double b = __a * sec.__b + __b * sec.__a;
        Complex res(a, b);
        return res;
    }

    Complex Complex::operator *(const double &sec)
    {
        double a = __a * sec;
        double b = __b * sec;
        Complex res(a, b);
        return res;
    }

    Complex operator *(const double &fst, const Complex &sec)
    {
        double a = sec.__a * fst;
        double b = sec.__b * fst;
        Complex res(a, b);
        return res;
    }

    Complex &Complex::operator *=(const Complex &sec)
    {
        double a = __a * sec.__a - __b * sec.__b;
        double b = __a * sec.__b + __b * sec.__a;
        __a = a;
        __b = b;
        return *this;
    }

    Complex &Complex::operator *=(const double &sec)
    {
        __a *= sec;
        __b *= sec;
        return *this;
    }

    Complex Complex::operator /(const Complex &sec)
    {
        double root = sec.__a * sec.__a + sec.__b * sec.__b;
        double a = (__a * sec.__a + __b * sec.__b) / root;
        double b = (__b * sec.__a - __a * sec.__b) / root;
        Complex res(a, b);
        return res;
    }

    Complex Complex::operator /(const double &sec)
    {
        double a = __a / sec;
        double b = __b / sec;
        Complex res(a, b);
        return res;
    }

    Complex operator /(const double &fst, const Complex &sec)
    {
        double root = sec.__a * sec.__a + sec.__b * sec.__b;
        double a = (fst * sec.__a) / root;
        double b = (-fst * sec.__b) / root;
        Complex res(a, b);
        return res;
    }

    Complex &Complex::operator /=(const Complex &sec)
    {
        double root = sec.__a * sec.__a + sec.__b * sec.__b;
        double a = (__a * sec.__a + __b * sec.__b) / root;
        double b = (__b * sec.__a - __a * sec.__b) / root;
        __a = a;
        __b = b;
        return *this;
    }

    Complex &Complex::operator /=(const double &sec)
    {
        __a /= sec;
        __b /= sec;
        return *this;
    }

    std::ostream &operator <<(std::ostream &tar, const Complex &sample)
    {
        tar << sample.__a << " + " << sample.__b << 'i';
        return tar;
    }
}
