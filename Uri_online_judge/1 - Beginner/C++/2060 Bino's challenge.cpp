#include <iostream>
#include <cmath>

int main()
{
    int Qnt, M2 = 0, M3 = 0, M4 = 0, M5 = 0;
    std::cin >> Qnt;

    int Num[Qnt];

    for(int i = 0; i < Qnt; i++)
    {
        std::cin >> Num[i];
        int a = abs(Num[i]);

        if (a % 2 == 0)
        {
            M2++;
            if (a % 4 == 0) M4++;
        }

        if(a % 3 == 0) M3++;
        if(a % 5 == 0) M5++;
    }

    std::cout << M2 << " Multiplo(s) de 2" << std::endl;
    std::cout << M3 << " Multiplo(s) de 3" << std::endl;
    std::cout << M4 << " Multiplo(s) de 4" << std::endl;
    std::cout << M5 << " Multiplo(s) de 5" << std::endl;


    return 0;
}
