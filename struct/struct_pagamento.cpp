#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Funcionario {
    string nome;
    double valorh;
    int hora;
    float pagamento = (valorh * hora);
};

int main(){

    int n;
    float pagamento;

    cout << "Quantos funcionarios serao digitados?: ";
    cin >> n;

    Funcionario funcionarios[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin, funcionarios[i].nome);

        cout << "Valor por hora: ";
        cin >> funcionarios[i].valorh;

        cout << "Quandidade de horas trabalhadas: ";
        cin >> funcionarios[i].hora;

        funcionarios[i].pagamento = funcionarios[i].valorh * funcionarios[i].hora;
    }

    cout << "Saida " << endl;

    for(int i = 0; i < n; i++){
        cout << fixed << setprecision(2);
        cout << funcionarios[i].nome << " " << funcionarios[i].pagamento << endl;
    }


    return 0;
}