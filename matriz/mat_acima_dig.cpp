#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    int n; 

    cout << "Digite a ordem da matriz quadrada: ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "],[" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    return 0;
}