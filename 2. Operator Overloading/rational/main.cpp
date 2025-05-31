// Archivo: main.cpp

// Para compilar y correr:
//
//     g++ *.cpp -o main && ./main

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "rational.h"

int main()
{
    Rational a(1, 2);
    Rational b(6, 4);
    Rational c(4, 8);
    Rational d;
    Rational e(-3);

    // Para imprimir los booleanos como true o false
    // en lugar de 1 o 0.
    std::cout << std::boolalpha;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    std::cout << "d: " << d << "\n";
    std::cout << "e: " << e << "\n";
    std::cout << "a + b: " << a + b << "\n";
    std::cout << "c + d: " << c + d << "\n";
    std::cout << "a == c: " << (a == c) << "\n";
    std::cout << "a == b: " << (a == b) << "\n";
    std::cout << "a != b: " << (a != b) << "\n";
    std::cout << "a != c: " << (a != c) << "\n";
    std::cout << "-a: " << -a << "\n";
    std::cout << "-e: " << -e << "\n";
    std::cout << "a - b: " << a - b << "\n";
    std::cout << "c - e: " << c - e << "\n";
    std::cout << "static_cast<double>(a): "
        << static_cast<double>(a) << "\n";
    std::cout << "static_cast<double>(b): "
        << static_cast<double>(b) << "\n";
    // std::cout << "a * b: " << a * b << "\n";
    // std::cout << "c * e: " << c * e << "\n";
    // std::cout << "~b: " << ~b << "\n";
    // std::cout << "~e: " << ~e << "\n";
    // std::cout << "b * ~b: " << b * ~b << "\n";
    // std::cout << "e * ~e: " << e * ~e << "\n";
    // std::cout << "a / b: " << a / b << "\n";
    // std::cout << "c / e: " << c / e << "\n";
    // try {
    //     Rational t = a / d;
    //     std::cout << "a / d: " << t << "\n";
    // } catch (const std::invalid_argument& e) {
    //     std::cout << "a / d: " << e.what() << "\n";
    // }
    // std::cout << "a < b: " << (a < b) << "\n";
    // std::cout << "a < c: " << (a < c) << "\n";
    // std::cout << "a <= c: " << (a <= c) << "\n";
    // std::cout << "a <= d: " << (a <= d) << "\n";
    // std::cout << "b > c: " << (b > c) << "\n";
    // std::cout << "a > c: " << (a > c) << "\n";
    // std::cout << "a >= c: " << (a >= c) << "\n";
    // std::cout << "e >= d: " << (e >= d) << "\n";
    return 0;
}