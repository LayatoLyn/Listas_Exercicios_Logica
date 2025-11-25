#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int lin, col;
    cout << "Digite a quantidade de linhas da matriz: "; 
    cin >> lin; 
    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> col;

    int matriz[lin][col];

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            cout << "Elemento [" << i << "],[" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Valores negativos: " << endl;
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           if (matriz[i][j] < 0){
               cout << matriz[i][j] << " ";
           }
        }
    }


    return 0;
}