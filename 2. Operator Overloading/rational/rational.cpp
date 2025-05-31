#include <iostream>
#include <stdexcept>
#include "rational.h"

int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

Rational::Rational(int numerator, int denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }

    int sign = 1;
    if (numerator * denominator < 0) {
        sign = -1;
    }
    numerator = abs(numerator);
    denominator = abs(denominator);
    int factor = gcd(numerator, denominator);
    _numerator = (numerator / factor) * sign;
    _denominator = denominator / factor;
}

std::string Rational::to_string() const
{
    if (_denominator == 1) {
        return std::to_string(_numerator);
    }
    return std::to_string(_numerator)
        + "/"
        + std::to_string(_denominator);
}

Rational Rational::operator + (const Rational& other) const
{
    int numerator = _numerator * other._denominator
                    + _denominator * other._numerator;
    int denominator = _denominator * other._denominator;
    return Rational(numerator, denominator);
}

Rational Rational::operator - () const
{
    return Rational(-_numerator, _denominator);
}

Rational Rational::operator - (const Rational& other) const
{
    return *this + -other;
}

Rational::operator double() const
{
    return static_cast<double>(_numerator) / _denominator;
}

bool Rational::operator == (const Rational& other) const
{
    return _numerator == other._numerator and _denominator == other._denominator;
}

bool Rational::operator != (const Rational& other) const
{
    return not ((*this) == other);
}

std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    return os << r.to_string();
}
