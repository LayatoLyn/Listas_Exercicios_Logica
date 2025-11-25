#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int qnt;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> qnt;

    int numeros[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

    cout << "MEDIA DOS PARES = " << fixed << setprecision(1);
    double soma = 0.0;
    int contador = 0;
    for (int i = 0; i < qnt; i++){
        if (numeros[i] % 2 == 0){
            soma += numeros[i];
            contador++;
        }
    }
    if (contador == 0){
        cout << "NENHUM NUMERO PAR" << endl;
    } else {
        cout << (soma / contador) << endl;
    }

    return 0;
}