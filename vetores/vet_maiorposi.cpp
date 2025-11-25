#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int qnt;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> qnt;

    int numeros[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
        cout << endl;
    }

    int maior = numeros[0];
    int posicao = 0;

    for (int i = 1; i < qnt; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
            posicao = i;
        }
    }
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;

    return 0;

}
