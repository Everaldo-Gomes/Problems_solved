#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int experiments, count_rabbit = 0, count_rat = 0, count_frog = 0, quantity = 0, total_quantity = 0;
    float p_rabbit, p_rat, p_frog;
    char type;

    cin >> experiments;

    for(int i = 0; i < experiments; i++){
        cin >> quantity >> type;

        total_quantity += quantity;

        if(type == 'C')      count_rabbit += quantity;
        else if(type == 'R') count_rat    += quantity;
        else if(type == 'S') count_frog   += quantity;
    }

    p_rabbit = (100.00 * count_rabbit) / total_quantity;
    p_rat = (100.00 * count_rat) / total_quantity;
    p_frog = (100.00 * count_frog) / total_quantity;

    cout << fixed << setprecision(2);
    cout << "Total: " << total_quantity << " cobaias" << endl;
    cout << "Total de coelhos: " << count_rabbit << endl;
    cout << "Total de ratos: " << count_rat << endl;
    cout << "Total de sapos: " << count_frog << endl;
    cout << "Percentual de coelhos: " << p_rabbit << " %" << endl;
    cout << "Percentual de ratos: " << p_rat << " %" << endl;
    cout << "Percentual de sapos: " << p_frog << " %" << endl;

    return 0;
}
