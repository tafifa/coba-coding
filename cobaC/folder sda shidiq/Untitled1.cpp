#include <iostream> // library
using namespace std; //	Untuk menyingkatkan kode biar tak terlalu panjang

int main()
{
	int n; // Deklarasikan integer n untuk panjang array
	
	cin >> n; // cin --> fungsi utk menginput ; >> --> tanda untuk inputan ; n --> menginput ke variabel n
	
	int array[n]; // Deklarasikan integer array dengan panjang array sebanyak n;
	
	// Untuk input array harus pakai looping
	
	for (int i = 0; i < n; i++) // i = 0 --> indeks array dimulai dari 0; i < n --> i tidak lebih dari n; i++ --> increment, artinya i bertambah satu
	{
		cin >> array[i]; // Input array ke-i;
	}
	
	// Untuk print array nya sama kayak input
	
	for (int i = 0; i < n; i++) 
	{
		cout << array[i]; // mencetak array ke-i; cout --> fungsi untuk mencetak output; << --> tanda untuk outputan;
	}
	
	return 0; // Menutup program
}
