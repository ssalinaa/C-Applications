// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    bool result = false;
    if (a + b > c)
    {
        result = true;
    }
    if (a + c > b)
    {
        result = true;
    }
    if (b + c > a)
    {
        result = true;
    }
}

