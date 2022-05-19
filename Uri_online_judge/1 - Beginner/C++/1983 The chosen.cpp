#include <iostream>
using namespace std;

int main()
{
    int StudentQnt;
    double HighestRegistration, HighestNote = 0.0;

    cin >> StudentQnt;

    double RegistraionNum[StudentQnt], StudentNote[StudentQnt];

    for (int i = 0; i < StudentQnt; i++)
    {
        cin >> RegistraionNum[i] >> StudentNote[i];

        if (StudentNote[i] > HighestNote)
        {
            HighestRegistration = RegistraionNum[i];
            HighestNote = StudentNote[i];
        }
    }

    if (HighestNote >= 8)
        cout << HighestRegistration << endl;
    else
        cout << "Minimum note not reached" << endl;

    return 0;
}
