#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

    double area(double base, double altura){
        return (base * altura);
    }

    double perimetro(double base, double altura){
        return 2 * (base + altura);
    }

    double diagonal(double base, double altura){
        return sqrt(pow(base, 2) + (pow(altura, 2)));
    }
int main(){

    double b, a;

    cout << "Digite a base do retangulo: ";
    cin >> b;
    cout << "Digite a altura do reangulo: ";
    cin >> a;

    cout << fixed << setprecision(4);
    cout << "Area = " << area(b, a) << endl;
    cout << "Perimetro = " << perimetro(b, a) << endl;
    cout << "Diagonal = " << diagonal(b, a) << endl;

    return 0;
}