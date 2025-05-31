#include <iostream>

int main()
{
    int x = 10;
    int &r = x;
    std::cout << "x  = " << x << "\n";
    std::cout << "r  = " << r << "\n";
    std::cout << "&x = " << &x << "\n";
    std::cout << "&r = " << &r << "\n";
    r++;
    std::cout << "x  = " << x << "\n";
    std::cout << "r  = " << r << "\n";
    return 0;
}
