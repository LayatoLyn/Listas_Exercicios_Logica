#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    int qnt; 
    cout << "Quantos alunos serao digitados? ";
    cin >> qnt;

    string nomes[qnt];
    double notas[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite nome e nota do " << i + 1 << "o aluno: " << endl;
        cin.ignore();
        getline(cin, nomes[i]);
        cin >> notas[i];
        cin >> notas[i];
        notas[i] += notas[i+1];
        notas[i] / 2.0 == notas[i];
    }

    cout << "ALUNOS APROVADOS:" << endl;
    for (int i = 0; i < qnt; i++){
        if (notas[i] >= 6.0){
            cout << nomes[i] << endl;
        }
    }


    return 0;
}