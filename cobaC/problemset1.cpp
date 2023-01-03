#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastio();
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    string str_a = std::to_string(a);
    string str_b = std::to_string(b);
    string str_c = std::to_string(c);
    string str_d = std::to_string(d);
    
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        string t(1, s.at(i));
        if (t == str_a) sum += a;
        if (t == str_b) sum += b;
        if (t == str_c) sum += c;
        if (t == str_d) sum += d;
    }
    cout << sum;

    return 0;
}