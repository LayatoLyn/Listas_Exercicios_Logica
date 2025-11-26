#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        int primo = true;

        if (X < 2) {
            primo = false;
        } else {
            for (int j = 2; j * j <= X; j++) {
                if (X % j == 0) {
                    primo = false;
                    break;
                }
            }
        }

        if (primo)
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
    }

    return 0;
}