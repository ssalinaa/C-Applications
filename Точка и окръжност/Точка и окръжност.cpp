#include <iostream>
#include <cmath>

int main()
{
	int x1 = 0;
	int y1 = 0;
	int x2, y2;
	std::cin >> x2 >> y2;
	int radius;
	std::cin >> radius;
	double length = sqrt((pow(x2, 2) + pow(y2, 2)));
	if (length < radius)
	{
		std::cout << "The point is inside the circle." << std::endl;
	}
	else
	{
		std::cout << "The point is outside the circle." << std::endl;
	}
}
