#include <iostream>
#include <cmath>

int main()
{
    int m, n, a;
    std::cin >> m >> n >> a;
    int result = std::ceil((float) m / a) * std::ceil((float) n / a);
    std::cout << result << std::endl;
}
