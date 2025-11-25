#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int qnt;
    double valor;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> qnt; // lê a quantidade de números que o usuário vai digitar

    double valores[qnt]; // cria um array para armazenar os valores

    for(int i = 0; i < qnt; i++){ // loop para ler os valores
        cout << "Digite um numero: ";
        cin >> valor; // adiciona o valor lido ao array
        valores[i] = valor; // armazena o valor no array
    }

    cout << "QUANTIDADE DE NUMEROS" << endl;

    for (int i = 0; i < qnt; i++){ // loop para mostrar os valores
        cout << fixed << setprecision(1) << valores[i] << endl; // mostra o valor com 1 casa decimal
    }
    return 0;
}