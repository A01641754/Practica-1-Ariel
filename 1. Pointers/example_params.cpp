#include <iostream>

void fun1(int x)
{
    x++;
}

void fun2(int *p)
{
    (*p)++;
}

void fun3(int &r)
{
    r++;
}

int main()
{
    int a = 5;
    std::cout << "a = " << a << "\n";
    fun1(a);
    std::cout << "a = " << a << "\n";
    fun2(&a);
    std::cout << "a = " << a << "\n";
    fun3(a);
    std::cout << "a = " << a << "\n";
    return 0;
}
