#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //deklarasi var n (banyaknya keranjang buah)
    vector <int> keranjang_apel; //deklarasi vector no urut apel (buat menampung data nomor urutan apel)
    vector <int> keranjang_mangga; //deklarasi vector no urut mangga (buat menampung data nomor urutan mangga)
    cin >> n; //input n

    for (int i = 1; i <= n; i++)
    {
        int KapKeranjang; //deklarasi var KapKeranjang (buat menampung data input kapasitas keranjang)
        cin >> KapKeranjang; //input kapasitas keranjang
        
        if (KapKeranjang % 2 == 0) //jika genap
        {
            keranjang_apel.push_back(i); //masukkan ke dalam vector keranjang apel
        } else //jika ganjil
        {
            keranjang_mangga.push_back(i); //masukkan ke dalam vector keranjang mangga
        } 
    }

    //OUTPUT 1
    if (keranjang_apel.size() != 0)
    {
        for (int i = 0; i < keranjang_apel.size(); i++)
        {
            cout << keranjang_apel[i] << " ";
        }
        
    } else
    {
        cout << "0";
    }
    cout << endl;

    //OUTPUT 2
    if (keranjang_mangga.size() != 0)
    {
        for (int i = 0; i < keranjang_mangga.size(); i++)
        {
            cout << keranjang_mangga[i] << " ";
        }
        
    } else
    {
        cout << "0" << endl;
    }
    
    //OUTPUT 3
    
    
    
    

    return 0;
}
