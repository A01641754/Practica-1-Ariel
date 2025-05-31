#include <iostream>

int main()
{
    int x = 5;
    std::cout << "x = "  << x << "\n";
    std::cout << "&x = " << &x << "\n";
    int *p = &x;
    std::cout << "p  = "  << p << "\n";
    std::cout << "&p = " << &p << "\n";
    std::cout << "*p = " << *p << "\n";
    (*p)++;
    std::cout << "Incremento\n";
    std::cout << "x  = " << x << "\n";
    std::cout << "*p = " << *p << "\n";
    return 0;
}
