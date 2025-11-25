#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
   int qnt;
   cout << "Quantos alunos serao digitados?";
   cin >> qnt;

    vector<string> nomes(qnt);
    vector<int> idades(qnt);
    vector<double> alturas(qnt);

    for (int i = 0; i < qnt; i++){
        cout << "Dados do " << i + 1 << " aluno:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    double soma_alturas = 0.0;
    
    for (int i = 0; i < qnt; i++){
        soma_alturas += alturas[i];
        if (idades[i] < 16){
            cout << "Alunos menores de 16 anos: " <<  (idades[i] * qnt) % 100 << "%" << endl;
            cout << nomes[i] << endl;
        }
    }
    double media_alturas = soma_alturas / qnt;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << media_alturas << endl;


    return 0;
}
