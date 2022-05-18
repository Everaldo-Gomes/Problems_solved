#include <iostream>
#include <iomanip>

int main()
{
    double V1, V2, Result;

    std::cin >> V1 >> V2;

    Result = (V2 - V1) / V1 * 100;

    std::cout << std::fixed << std::setprecision(2) << Result << "%" << std::endl;

    return 0;
}
