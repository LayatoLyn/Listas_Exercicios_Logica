#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double S = 0.0;
    int numerador = 1;
    int denominador = 1;

    while (numerador <= 39) {
        S += (double)numerador / denominador;
        numerador += 2;
        denominador *= 2;
    }

    cout << fixed << setprecision(2) << S << endl;
    return 0;
}