#include <iomanip>
#include <iostream>

using namespace std; 

int main(){

    int n;
    float soma = 0;

    cout << "Digite a ordem da sua matriz quadrada: ";
    cin >> n;

    float matriz[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elemento[" << i << "],[" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl; 
    cout << fixed << setprecision(1);

    cout << "SOMA DOS POSITIVOS: ";

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] > 0){
                soma += matriz[i][j];
            }
        }
    }

    cout << soma << endl;

    int lin, col;

    cout << "Escolha uma linha: ";
    cin >> lin;

    cout << "LINHA ESCOLIDA: ";
    for (int i = lin; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
    }

    cout << endl;

    cout << "Escolha uma coluna: ";
    cin >> col;

    cout << endl;

    cout << "COLUNA ESCOLIDA: ";
    for (int i = 0; i < n; i++){
        for (int j = col; j < n; j++){
            cout << matriz[i][j] << " ";
        }
    }

    cout << endl;

    cout << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i] == matriz[j]){
                cout << matriz[i][j] << " ";
            }
        }
    }

    cout << endl;

    cout << "MATRIZ ALTERADA: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; i < n; i++){
            if (matriz[i][j] < 0){
                matriz[i][j] = (matriz[i][j] * matriz[i][j]);
            }
            cout << matriz[i][j] << " ";
        }
    }

    return 0;
}