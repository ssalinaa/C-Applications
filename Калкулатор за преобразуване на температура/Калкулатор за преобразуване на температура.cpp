#include <iostream>

int main()
{
	double farenhayt;
	std::cin >> farenhayt;
	double celsius;
	celsius = ((farenhayt - 32) * 5 ) / 9;
	std::cout << celsius << std::endl;
}

