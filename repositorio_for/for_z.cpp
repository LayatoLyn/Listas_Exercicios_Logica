#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int X, Z;
    cin >> X;

    do {
        cin >> Z;
    } while (Z <= X);

    int soma = 0, count = 0, atual = X;
    while (soma <= Z) {
        soma += atual;
        atual++;
        count++;
    }

    cout << count << endl;
    return 0;
}