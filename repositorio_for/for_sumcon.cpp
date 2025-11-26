#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x, y, soma = 0;
        cin >> x >> y;

        if (x % 2 == 0) x++;

        for (int j = 0; j < y; j++) {
            soma += x + 2 * j;
        }

        cout << soma << endl;
    }

    return 0;
}