#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, qtdnegativos = 0;

    cout << "Qual a ordem da matriz?: ";
    cin >> n;

    int matriz[n][n];

    for (int lin = 0; lin < n; lin++){ // definir linha
        for (int col = 0; col < n; col++){ // definir coluna
            cout << "Elemento [" << lin << "],[" << col << "]: ";
            cin >> matriz[lin][col];
            if (matriz[lin][col] < 0){
                qtdnegativos++;
            }
        }

    }

    cout << "Diagonal principal: " << endl;
     for (int lin = 0; lin < n; lin++){
        for (int col = 0; col < n; col++){ 
            if (lin == col){
                cout << matriz[lin][col] << " ";
            }
        }
    }
        cout << endl;
        cout << "Quantidade de negativos: " << qtdnegativos << endl;

    return 0;
}