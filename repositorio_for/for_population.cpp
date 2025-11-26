#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int PA, PB;
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;

        int anos = 0;
        while (PA <= PB && anos <= 100) {
            PA += (PA * (G1 / 100.0));
            PB += (PB * (G2 / 100.0));
            anos++;
        }

        if (anos > 100)
            cout << "Mais de 1 seculo" << endl;
        else
            cout << anos << " anos" << endl;
    }

    return 0;
}