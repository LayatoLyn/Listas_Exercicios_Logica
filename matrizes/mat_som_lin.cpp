#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int lin, col;
    double soma;
    cout << "Digite a quantidade de linhas da matriz: "; 
    cin >> lin;

    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> col;

    double matriz[lin][col];

    for (int i = 0; i < lin; i++){
        cout << "Digite os dados da " << i+1 << "a linha:"<< " " << endl;
        for (int j = 0; j < col; j++){
            cin >> matriz[i][j];
        }
    }

    cout << endl;
    cout << "Vetor Gerado: " << endl;
    for (int i = 0; i < lin; i++){
        soma = 0;
        for (int j = 0; j < col; j++){
            soma += matriz[i][j];
        }
        cout << fixed << setprecision(1) << soma << endl;
    }

    return 0;
}