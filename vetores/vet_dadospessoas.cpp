#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int n, count = 1;

    cout << "Quantas pessoas vao ser digitadas: ";
    cin >> n;

    double altura[n];
    string genero[n];

    for (int i = 0; i < n; i++){
        cout << "Altura da " << count << "a pessoa: ";
        cin >> altura[i];
        cout << endl; 
        cout << "Genero da " << count << "a pessoa: ";
        cin >> genero[i];
        count++;
    }

    double menor = altura[0];
    
    for (int i = 0; i < n; i++){
        if (altura[i] < menor){
            menor = altura[i];
        }
    }

    double maior = altura[0];

    for (int i = 0; i < n; i++){
        if (altura[i] > maior){
            maior = altura[i];
        }
    }

    int qnt_male = 0;

    for (int i = 0; i < n; i++){
        if (genero[i] == "M" ){
            qnt_male++;
        }
    }

    int qnt_female = 0;

    for (int i = 0; i < n; i++){
        if (genero[i] == "F" ){
            qnt_female++;
        }
    }

    double soma;

    for (int i = 0; i < n; i++){
        if (genero[i] == "F"){
            soma += altura[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    cout << "Media das alturas das mulheres = " << soma / qnt_female << endl;
    cout << "Numero de homens = " << qnt_male;


    return 0;
}