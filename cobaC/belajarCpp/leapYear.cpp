// Program untuk menghitung tahun kabisat

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: "; cin >> year;

    // tentukan tahun sebanyak 4 digit
    int digit4 = year / 1000;
    
    if (digit4<10 && digit4>0)
    {
        if (year % 4 == 0)
        {
            if (year % 100 != 0 || year % 400 == 0)
            {
                cout << year << " is a leap year\n";
            }
            else cout << year << " is not a leap year.\n";
        } else cout << year << " is not a leap year.\n";
    }
    else cout << "Invalid entry.\n";

    return 0;
}