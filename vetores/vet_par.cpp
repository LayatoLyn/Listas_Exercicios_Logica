#include <iomanip>
#include <iostream>

using namespace std;

int main (){
    int qnt;
    int numeros[qnt];

    cout << "Quantos numeros voce vai digitar? ";
    cin >> qnt;

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
        cout << endl;
    }

    cout << "NUMEROS PARES:" << endl;
    for (int i = 0; i < qnt; i++){
        if (numeros[i] % 2 == 0){
            cout << numeros[i] << endl;
        }
    }

    cout << "QUANTIDADE DE PARES = ";
    int contador = 0;
    for (int i = 0; i < qnt; i++){
        if (numeros[i] % 2 == 0){
            contador++;
        }
    }
    cout << contador << endl;

    return 0;
}