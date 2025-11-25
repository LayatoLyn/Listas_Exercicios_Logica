#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int qnt, negativo = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin  >> qnt;

    int valores[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> valores[i];
        if (valores[i]<0){
            negativo++;
        }
    }
    cout << "NUMEROS NEGATIVOS" << endl;
    for (int i = 0; i < qnt; i++){
        if (valores[i]<0){
            cout << valores[i] << endl;
        }
    }


    return 0;
}