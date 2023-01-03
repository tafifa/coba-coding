#include <iostream>
using namespace std;

int main() {
    int ARRAYLENGTH; cin >> ARRAYLENGTH;
    
    int array[ARRAYLENGTH];
    for (int iterator = 0; iterator < ARRAYLENGTH; iterator++) {
        cin >> array[iterator];
    }

    for (auto i : array) {
        cout << i << ' ';
    }

    return 0;
}