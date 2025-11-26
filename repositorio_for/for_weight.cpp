#include <iomanip>
#include <iostream>
#include <cmath> 

using namespace std;

int main(){

    int x, i = 0;
    float n1, n2, n3, peso, media;

    cin >> x;
    while (i != x){

    cin >> n1 >> n2 >> n3;

    peso = 2 + 3 + 5;
    media = (n1*2 + n2*3 + n3*5) / peso;
    cout << fixed << setprecision(1) << media << endl;
    i++;
    }

    return 0;
}
