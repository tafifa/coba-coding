#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int r[n], s[n], t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> s[i] >> t[i];
    }

    for (int i = 0; i < n; i++)
    {
        r[i] = 2 * 3.14 * r[i] * r[i];
        s[i] = s[i] * s[i] * 1.73 / 4;
        t[i] = t[i] * t[i];
    }
    int i = 0;
    while (i < n)
    {
        if (r[i] - r[i] > 0)
        {
            cout << "LINGKARAN" << endl;
        }
        else if (s[i] - r[i] > 0)
        {
            cout << "PERSEGI" << endl;
        }
        else if (t[i] - r[i] > 0)
        {
            cout << "SEGITIGA" << endl;
        }
        i++;
    }

    return 0;
}
