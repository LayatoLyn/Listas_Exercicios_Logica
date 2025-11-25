#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int qnt;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> qnt;
    double vetor[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    double soma = 0.0;
    for (int i = 0; i < qnt; i++){
        soma += vetor[i];
    }
    cout << "MEDIA DO VETOR = " << fixed << setprecision(3) << (soma / qnt) << endl;
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (int i = 0; i < qnt; i++){
        if (vetor[i] < (soma / qnt)){
            cout << fixed << setprecision(3) << vetor[i] << endl;
        }
    }

    return 0;

}