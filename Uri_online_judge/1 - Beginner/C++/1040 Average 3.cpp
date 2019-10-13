#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float n1, n2, n3, n4, average, exame_note, final_average;
    cin >> n1 >> n2 >> n3 >> n4;

    average = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

    cout << fixed << setprecision(1) << "Media: " << average << endl;

    if(average >= 7.0)cout << "Aluno aprovado." << endl;
    if(average < 5.0)cout << "Aluno reprovado." << endl;

    if(average >= 5.0 && average < 6.9){
        cout << "Aluno em exame." << endl;
        cin >> exame_note;
        cout << "Nota do exame: " << exame_note << endl;

        final_average = (average + exame_note) / 2;

        if(final_average >= 5.0) cout << "Aluno aprovado." << endl;
        if(final_average <= 4.9){
            cout << "Aluno reprovado." << endl;
            cout << fixed << setprecision(1) << final_average << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << final_average << endl;
    }
    return 0;
}
