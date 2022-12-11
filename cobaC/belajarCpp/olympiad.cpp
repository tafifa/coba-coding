#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, r, x;

    cin >> n >> l >> r >> x;

    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    
    vector<int> rep = {c[0]};
    int total = c[0];

    //debugging
    cout << "check declaration >> n:" << n << " l:" << l << " r:" << r << " x:" << x << endl;

    for (int i = 1; i < n; i++)
    {
        rep.push_back(c[i]);

        //debugging
        for (auto i: c) 
            cout << "&&debug0: " << i << ' ';

        total += c[i];
        
        //debugging
        cout << "&&debug1: " << total;

        if (total >= l && total <= r)
        {
            break;
        }

        //debugging & repeat
        else {
            rep.clear();
            total = c[0];
            cout << " __if error__0__\n";
        }
    }
    int min = *min_element(rep.begin(), rep.end());
    int max = *max_element(rep.begin(), rep.end());

    if (max-min > x)
    {
        cout << "problemset sebanyak " << rep.size() << endl;
    }

    //debugging
    else cout << " __if error__1__\n";

}