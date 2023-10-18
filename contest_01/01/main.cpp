#include <iostream>
#include <cmath>
int main()
{
     long double a, b;
    a = sqrt(12);
    b=1 - (1.0/(3 * 3)) + (1.0/(5 * pow(3,2))) -(1.0/(7 * pow(3,3))) +(1.0 /(9 * pow(3, 4))) -(1.0/(11 * pow(3, 5)));
    std::cout << a*b;
    return 0;
}
