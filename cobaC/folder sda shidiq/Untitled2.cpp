#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	int Luas[n];
	
	double alas, tinggi;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> alas >> tinggi;
		Luas[i] = alas * tinggi * 0.5;
		
		cout << "Luas Segitiga ke-" << i << " adalah " << Luas[i] << endl;
	}
	
	cout << "Segitiga terbesar adalah segitiga dengan luas " << *max_element(Luas, Luas+n);
	
	/*
	for (int i = 0; i < n; i++)
	{
		
	}
	*/
	
	
	
	return 0;
}
