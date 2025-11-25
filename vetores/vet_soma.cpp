#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int qnt;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> qnt;

    double valores[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> valores[i];
    }

    cout << "VALORES = ";
    for (int i = 0; i < qnt; i++){
        cout << fixed << setprecision(1) <<  valores[i] << " ";
    }
    cout << endl;

    cout << "SOMA = ";
    cout << fixed << setprecision(2);
    double soma = 0;

    for (int i = 0; i < qnt; i++){
        soma += valores[i];
    }
    cout << soma << endl;

    cout << "MEDIA = ";
    cout << fixed << setprecision(2) << soma/qnt << endl;

    return 0;
}