#include <iomanip>
#include <iostream>
#include <cmath> 

using namespace std;

int main(){

    int z;
    float divisao, x, y;

    cin >> z; // numero de casos nao funciona corretamente, para um antes do numero inserido
    for (int i = 0; i >= z; i++){
        cout << fixed << setprecision(1);
        cin >> x >> y;
        if (y == 0){
            cout << "divisao impossivel" << endl;
        } else{
            divisao = x / y;
            cout << divisao << endl;
        }

        i++;
    }

    return 0;
}
