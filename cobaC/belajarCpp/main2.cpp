#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string rev[n];
    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[i];
        reverse(rev[i].begin(), rev[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() > 10)
        {
            cout << (char)arr[i][0] << arr[i].length()-2 << (char)rev[i][0] << endl;
        }
        else cout << arr[i] << endl;
    }

    return 0;
}