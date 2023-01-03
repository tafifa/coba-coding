#include <iostream>
using namespace std;

int main() {
  int n,m;
    
  string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> n >> m;
    
    for (n; n <= m; n++) {
        if (n > 9) {
            if (n % 2 == 0) {
                cout << "even ";
            }
            else cout << "odd ";
        } else cout << num[n] << " ";
    }



  return 0;
}
