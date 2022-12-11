#include <iostream>
using namespace std;
 
int main()
{
    int n;
 
    cin >> n;
 
    if (n == 2)
    {
        cout << "NO" << endl;
    }
    else if (n % 2 == 0)
    {
        double m = n / 2;
        if (m / (int)m == 1)
        {
           int o = m;
           if (o % 2 == 0)
           {
               cout << "YES" << endl;
           }
           else if (o == 3 || 5)
           {
               cout << "YES" << endl;
           }
           else if (40 <= o <= 49)
           {
               cout << "YES" << endl;
           }
           else cout << "NO" << endl;
        }
        else cout << "NO" << endl; 
    }
    else cout << "NO" << endl;
 
    return 0;
}