#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int lin, col;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> lin;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> col;

    int matrizA[lin][col];
    int matrizB[lin][col];

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            cout << "Elemento [" << i << "],[" << j << "] da matriz A: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            cout << "Elemento [" << i << "],[" << j << "] da matriz B: ";
            cin >> matrizB[i][j];
        }
    }
    cout << "Matriz Soma: " << endl;
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            cout << matrizA[i][j] + matrizB[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}