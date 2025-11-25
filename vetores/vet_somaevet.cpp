#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int qnt;
    int vetorA[qnt];
    int vetorB[qnt];

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> qnt;

    for (int i = 0; i < qnt; i++){
        cout << "Digite os valores do vetor A: ";
        cin >> vetorA[i];
    }

    for (int i = 0; i < qnt; i++){
        cout << "Digite os valores do vetor B: ";
    }
    int vetorB[qnt];
    for (int i = 0; i < qnt; i++){
        cin >> vetorB[i];
    }
    int vetorSoma[qnt];
    for (int i = 0; i < qnt; i++){
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }
    cout << "VETOR RESULTANTE: " << endl;
    for (int i = 0; i < qnt; i++){
        cout << vetorSoma[i] << endl;
    }

    return 0;
}