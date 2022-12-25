#include <iostream>
using namespace std;

int kali(int x, int n, int jumlah){
    int i, j, k;

    j = n;
    while (j >= 1) {
        for (int i = 1; i <= j; i++) {
            x = x * i;
            // DEBUG
            cout << x << ' ' << j << ' ';
        }  
        j = j / 2;
        // DEBUG
        cout << '\n';
    }
    jumlah = x;

    return jumlah;
}

int main() {
    int x, n;
    cin >> x >> n;

    int jumlah = kali(x, n, 0);

    cout << jumlah << '\n';

    return 0;
}

// The complexity for this algorithm is logarithmic (OlogN), 
// because the input decreasing every looping processed