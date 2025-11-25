#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double areaQ(double base){
    return base * base;
}

double areaT(double base, double altura){
    return (base * altura) / 2;
}

double areaTr(double base, double altura, double baseM){
    return ((base + baseM) * altura) / 2;
}

int main(){
    double b, bM, a;

    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> bM;

    cout << fixed << setprecision(4);
    cout << "Area do Quadrado: " << areaQ(a) << endl;
    cout << "Area do Triangulo: " << areaT(a, b) << endl;
    cout << "Area do Trapezio: " << areaTr(a, bM, b) << endl;


    return 0;
}