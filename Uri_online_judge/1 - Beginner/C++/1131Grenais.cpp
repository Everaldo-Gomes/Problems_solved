#include <iostream>
using namespace std;

int main() {

    int goals_inter, goals_gremio, grenais = 1, request, inter_victory = 0, gremio_victory = 0, draws = 0, winner;

    while(true) {
        cin >> goals_inter >> goals_gremio;

        if(goals_inter > goals_gremio) inter_victory++;
        else if(goals_inter < goals_gremio) gremio_victory++;
        else draws++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> request;

        if(request == 1){
            grenais++;
            continue;
        }
        else if(request == 2) break;
    }

    if(inter_victory == gremio_victory) cout << "Nao houve vencedor" << endl;

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_victory << endl;
    cout << "Gremio:" << gremio_victory << endl;
    cout << "Empates:" << draws << endl;

    if(inter_victory > gremio_victory) cout << "Inter venceu mais" << endl;
    else cout << "Gremio venceu mais" << endl;

    return 0;
}
