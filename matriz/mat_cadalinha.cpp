#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Qual a ordem da matriz?: ";
    cin >> n;

    int matriz[n][n];

    for (int lin = 0; lin < n; lin++){ 
        for (int col = 0; col < n; col++){
            cout << "Elemento [" << lin << "],[" << col << "]: ";
            cin >> matriz[lin][col];
        }

    }

    cout << "Maior elemento de cada linha: " << endl;
     for (int lin = 0; lin < n; lin++){
        int maior = matriz[lin][0];
        for (int col = 0; col < n; col++){ 
            if (matriz[lin][col] > maior){
                maior = matriz[lin][col];
            }
        }
        cout << maior << " ";
    }
        cout << endl;


    return 0;
}