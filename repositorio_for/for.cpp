#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int x, y = 1; 

    cin >> x;

    for (y >= 1; y <= x; y++) {
        while (y % 2 != 0) {
            cout << y << endl;
            break;
        }
    }



    return 0;
}