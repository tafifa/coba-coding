#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;

    cout << "VECTOR C++" << endl;
    cout << "VECTOR ADALAH ARRAY DINAMIS" << endl;
    cout << "DI MANA UKURAN VECTOR AKAN MENYESUAIKAN SECARA OTOMATIS DENGAN ISI VECTOR" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    //menambahkan elemen ke dalam vector
    //note: bisa menggunakan perulangan
    cout << "\nPUSH_BACK : 11, 12, 13, 14, 15" << endl;
    cout <<"---------------------------------" << endl;
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);

    //menampilkan seluruh isi vector dengan index
    cout << "Menampilkan seluruh isi vector dengan index (mulai dari index[0]): " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl << endl;

    //mengambil/menghapus elemen vector paling belakang
    cout << "\nPOP_BACK : 14, 15" << endl;
    cout << "-------------------" << endl;
    vec.pop_back();
    vec.pop_back();

    cout << "Isi vector saat ini" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    //menghapus semua isi vector
    cout << "\nMENGOSONGKAN VECTOR" << endl;
    cout << "---------------------" << endl;
    vec.clear();

    cout << "Isi vector saat ini" << endl;
    if (vec.size() != 0)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        
    } else
    {
        cout << "<Kosong>";
    }
    cout << endl;
    
    return 0;
}