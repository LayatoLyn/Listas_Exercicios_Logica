#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, soma = 0;

    cout << "N: ";
    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];

        soma += vetor[i];

    }

    int maior = vetor[0];

    for (int i = 1; i < n; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    int menor = vetor[0];
    
    for (int i = 0; i < n; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    return 0;
}
