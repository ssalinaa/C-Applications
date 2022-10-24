#include <iostream>
#include <cmath>
#include <string>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	bool result = true;
	if (a + b <= c)
	{
		result = false;
	}
	if (a + c <= b)
	{
		result = false;
	}
	if (b + c <= a)
	{
		result = false;
	}
	if (a <= 0 || b <= 0 || c <= 0)
	{
		std::cout << "Invalid datas!" << std::endl;
	}
	if (result)
	{
		std::cout << "Yes." << std::endl;
	}
	else
	{
		std::cout << "No!" << std::endl;
	}
}

