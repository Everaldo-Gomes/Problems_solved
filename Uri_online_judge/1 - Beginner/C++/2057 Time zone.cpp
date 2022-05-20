#include <iostream>

int main ()
{
    int DepartureTime, TravelTime, TimeZone, LocalTime = 0;

    std::cin >> DepartureTime >> TravelTime >> TimeZone;

    LocalTime = DepartureTime + TravelTime + TimeZone;

    if (LocalTime == 24)     LocalTime = 0;
    else if (LocalTime < 0)  LocalTime += 24;
    else if (LocalTime > 24) LocalTime %= 24;

    std::cout << LocalTime << std::endl;

    return 0;
}
