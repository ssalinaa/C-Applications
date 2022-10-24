#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	double x;
	if (a != 0 && b != 0)
	{
	 x = -(b / a);
		std::cout << x << std::endl;
	}
	if (a == 0 && b != 0)
	{
		std::cout << "NO" << std::endl;
	}
	if (a == 0 && b == 0)
	{
		std::cout << "INF" << std::endl;
	}
}