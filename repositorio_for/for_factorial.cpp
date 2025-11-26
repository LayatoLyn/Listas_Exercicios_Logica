#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    int fatorial = 1;
    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    cout << fatorial << endl;
    return 0;
}