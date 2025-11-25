#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int qnt;
    cout << "Quantas pessoas voce vai digitar? ";
    cin >> qnt;

    string nomes[qnt];
    int idades[qnt];

    for (int i = 0; i < qnt; i++){
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    int maior_idade = idades[0];
    string nome_mais_velho = nomes[0];
    for (int i = 1; i < qnt; i++){
        if (idades[i] > maior_idade){
            maior_idade = idades[i];
            nome_mais_velho = nomes[i];
        }
    }

    cout << "PESSOA MAIS VELHA: " << nome_mais_velho << endl;

    return 0;
}