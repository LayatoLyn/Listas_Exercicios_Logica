#include <iomanip>
#include <iostream>

using namespace std;

double pagamento(double valorh, double hora){
    return (valorh * hora);
}

int main(){

    string name;
    double valorh, hora;

    cout << "Qual o nome do Funcionario: ";
    cin >> name;

    cout << "Horas trabalhadas: ";
    cin >> valorh;

    cout << "Valor por hora: ";
    cin >> hora;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << name <<  " deve ser de R$:" << pagamento(valorh, hora) << " reais";


    return 0;
}
