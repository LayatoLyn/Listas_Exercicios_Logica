#include <iostream>
using namespace std;

int main() {
    int Div;
    cin >> Div;

    for (int i = 1; i <= Div; i++) {
        if (Div % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}