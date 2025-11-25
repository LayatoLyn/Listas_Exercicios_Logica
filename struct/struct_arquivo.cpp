#include <iomanip>
#include <iostream>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main(){

    int n;

    cout << "Quantas pessoas serao digitadas: ";
    cin >> n;

    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);

        cout << "Idade: ";
        cin >> pessoas[i].idade;
    }

    cout << "Saida: " << endl;

    for(int i = 0; i < n; i++){
        cout << pessoas[i].nome << " " << pessoas[i].idade << endl;
    }


    return 0;
}