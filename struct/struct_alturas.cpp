#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
    double altura;
};

int main(){
    int n, count;
    double altura_med;

    cout << "Quantas pessoas serao digitadas?: ";
    cin >> n;

    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);

        cout << "Idade: ";
        cin >> pessoas[i].idade;

        cout << "Altura: ";
        cin >> pessoas[i].altura;

        pessoas[i].altura += pessoas[i].altura;

        altura_med = pessoas[i].altura / n;
        }

    cout << "Saida" << endl;

    cout << "Altura media = " << altura_med << endl;
    
    for (int i = 0; i < n; i++){
        if (pessoas[i].altura < 16){
            cout << "Alunos menores de 16 anos: " << (pessoas[i].altura * n) % 100 << "%" << endl;
            cout << pessoas[i].nome << endl;
        }
    }

}
