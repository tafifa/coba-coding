#include <stdio.h>
#include <iostream.h>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    int nilai[10];
    cout << "Input 10 nilai mahasiswa" << endl; // input nilai mahasiswa
    for (i = 0; i < 10; i++)
    {
        cout << "Mahasiswa " << i+1 << " : ";
        cin >> nilai[i];
    }

    cout << "Nilai Mahasiswa yang telah diinput" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << nilai[i] << " ";
    }
    getch();
}
