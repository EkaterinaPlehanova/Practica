#include <iostream>
#include <cmath>
int main()
{
   long double m;
   long double h;
    std::cout << "";
    std::cin >> m;
    std::cin >> h;
    std::cout.precision(20);
    std::cout << m/pow(h,2);
    return 0;
}
