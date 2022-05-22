#include <iostream>
using namespace std;

int main()
{
    long long int SideKities;

    cin >> SideKities;

    cout << (SideKities * (SideKities - 3)) / 2 << endl;

    return 0;
}

// SideKities - 3 -> because the minimum side that a kite can have is 3
// divided by 2   -> because each string can only be used in 2 points
