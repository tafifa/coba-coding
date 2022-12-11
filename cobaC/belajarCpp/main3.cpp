#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int sum[n], a1,a2,a3;

    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> a2 >> a3;
        sum[i] = a1 + a2 + a3;
    }

    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] >= 2)
        {
            summ += 1;
        }
    }
    cout << summ << endl;

    return 0;
}