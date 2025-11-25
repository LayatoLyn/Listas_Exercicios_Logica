#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int n, count = 1, menor_10 = 0, entre_10_20 = 0, maior_20 = 0;

    cout << "Quantas produtos vao ser digitados? ";
    cin >> n;

    string nome[n];
    double compra[n];
    double venda[n];
    double lucro[n];

    for (int i = 0; i < n; i++){
        cout << "Produto " << count << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Preco de compra: ";
        cin >> compra[n];
        cout << "Preco de venda: ";
        cin >> venda[n];
        count++;
    }

    double som_lucro = 0.0;
    for (int i = 0; i < n; i++){
        lucro[i] = venda[i] - compra[i];
        som_lucro += lucro[i];
        if (lucro[i] < (compra[i]*0.10)){
            menor_10++;
        }else if (lucro[i] >= (compra[i]*0.10) || lucro[i] <= (compra[i]*0.20)){
            entre_10_20++;
        } else if (lucro[i] > (compra[i]*0.20)){
            maior_20++;
        }
    }
    
    double som_venda = 0.0;
    for (int i = 0; i < n; i++){
        som_venda += venda[i];
    }

    double som_compra = 0.0;
    for (int i = 0; i < n; i++){
        som_compra += compra[i];
    }

    cout << "RELATORIO" << endl;
    cout << "Lucro abixo de 10%: " << menor_10 << endl;
    cout << "Lucro entre 10% e 20%: " << entre_10_20 << endl;
    cout << "Lucro acima de 20%: " << maior_20 << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << som_compra << endl;
    cout << "Valor total de venda: " << som_venda << endl;
    cout << "Lucro total: " << som_lucro << endl;

    return 0;
}