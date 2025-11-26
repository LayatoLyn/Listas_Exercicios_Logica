#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int valor, max = 0, posicao = 0;

    for (int i = 1; i <= 100; i++) {
        cin >> valor;
        if (valor > max) {
            max = valor;
            posicao = i;
        }
    }

    cout << max << endl;
    cout << posicao << endl;

    return 0;
}