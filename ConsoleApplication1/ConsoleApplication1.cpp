#include <iostream>
using namespace std;

int arr[20];							// Membuat Array dengan panjang data 20
int n;									// Membuat Variable inputan n 

void input() {					//Procedure Input 
	while (true)
	{
		cout << "Memasukkan Jumlah Data pada Array : "; //Membuat Inputan Jumlah elem Array 
		cin >> n;										//Memanggil Variable inputan n

		if (n <= 20) {									//Membuat kondisi n tidak lebih dari 20 
			break;
		}
		else
		{
			cout << "n\Array yang anda masukkan maksimal 20 elemen. \n"; //Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;											//Membuat jarak per baris program
	cout << "=======================" << endl;				//Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl; 
	cout << "=======================" << endl; 

	for (int i = 0; i < n; i++)								//Menggunakam perulangan for untuk menyimpan data pada Array
	{
		cout << "Data ke-" << (i + 1) << ": "; //Memasukkan nilai data n kedalam array arr
