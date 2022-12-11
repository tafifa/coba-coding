#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;
    cout << "Input banyaknya deret fibonacci : "; cin >> n;

    int num0 = 0, num1 = 1;

    int fibonacci = num0 + num1;

    cout << num0 << " " << num1;

    for (int i = 2; i <= n; i++)
    {
        cout << " " << fibonacci;
        num0 = num1;
        num1 = fibonacci;
        fibonacci = num0 + num1;
        if (fibonacci < 0)
        {
            cout << " stop ";
            break;
        }
    }

    return 0;
}