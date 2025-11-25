#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    double n1, n2;
};


int main(){

    int n;

    cout << "Quantos alunos serao digitados?: ";
    cin >> n;

    Aluno alunos[n];

    for(int i = 0; i < n; i++){
        cin.ignore(); // ignora o primeiro input
        cout << "Nome: ";
        getline(cin, alunos[i].nome); // pega o primeiro input

        cout << "Nota 1: ";
        cin >> alunos[i].n1;

        cout << "Nota 2: ";
        cin >> alunos[i].n2;

    }

    cout << "Aprovados: " << endl;

    for(int i = 0; i < n; i++){
        double media = (alunos[i].n1 + alunos[i].n2 / 2.00);
        if(media >= 6.00){
            cout << alunos[i].nome << "(" << media << ")" << endl;
        }
    }

    return 0;
}