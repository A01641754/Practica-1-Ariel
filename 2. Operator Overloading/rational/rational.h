// ----------------------------------------------------------
// Práctica 1: Clase Rational
// Fecha: 2 de junio, 2025.
// Autores:
//          A01751507 Ángel Adrik Merino Cedeño
//          A01641754 Eduardo Márquez López
// ----------------------------------------------------------
#pragma once

#include <iostream>

class Rational {

public:

    Rational(int numerator=0, int denominator=1);
    std::string to_string() const;
    Rational operator + (const Rational& other) const;
    Rational operator - () const;
    Rational operator - (const Rational& other) const;
    operator double() const;
    bool operator == (const Rational& other) const;
    bool operator != (const Rational& other) const;
    Rational operator * (const Rational& other) const;
    Rational operator ~ () const;
    Rational operator / (const Rational& other) const;
    bool operator < (const Rational& other) const;
    bool operator <= (const Rational& other) const;
    bool operator > (const Rational& other) const;
    bool operator >= (const Rational& other) const;



private:

    int _numerator;
    int _denominator;
};

std::ostream& operator<<(std::ostream& os, const Rational& r);
