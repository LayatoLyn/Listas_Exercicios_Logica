#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int n, fib;

    cin >> n;

        if (n == 0){
            cout << "0";
        } else if (n == 1){
            cout << "0 1";
        } else {
            int a = 0, b = 1, c;
            cout << "0 1";
            for (int i = 3; i <= n; i++){
                c = a + b;
                cout << " " << c;
                a = b;
                b = c;

            }
            cout << endl;

        }

    return 0;
}