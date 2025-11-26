#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int n1, n2, soma = 0, i, x, y;

    cin >> n1 >> n2;

    if(n1 > n2){
        x = n2;
        y = n1;
    } else {
        x = n1;
        y = n2;
    }

    for (i = x; i <=y; i++){
        if (i % 2 !=0){
            soma += i;
            break;
        }
    }
    
    cout << soma << endl;

    return 0;
}