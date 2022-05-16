#include <iostream>
#include <iomanip>

int main()
{
    int ProductQnt;
    std::cin >> ProductQnt;

    int    ProductNum  [ProductQnt];
    double ProductPrice[ProductQnt], TotalPrice = 0;

    for(int i = 0; i < ProductQnt; i++)
    {
        std::cin >> ProductNum[i] >> ProductPrice[i];

        switch(ProductNum[i])
        {
            case 1001:
                TotalPrice += 1.50 * ProductPrice[i];
                break;

            case 1002:
                TotalPrice += 2.50 * ProductPrice[i];
                break;

            case 1003:
                TotalPrice += 3.50 * ProductPrice[i];
                break;

            case 1004:
                TotalPrice += 4.50 * ProductPrice[i];
                break;

            case 1005:
                TotalPrice += 5.50 * ProductPrice[i];
                break;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << TotalPrice << std::endl;

    return 0;
}
