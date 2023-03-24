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
		cin >> arr[i];
	}
}

void insertionsort() {											//Procedure Insertionsort 

	int temp;													//Membuat Variable data temporer atau penyimpanan sementara 
	int j;														//Membuat variable j sebagai penanda 


	for (int i = 1; i < n; i++) {								// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];											// 2. Simpan nilai arr [i] ke variable sementara temp

		j = i - 1;												// 3. Setting nilai j sama dengan i - 1;

		while (j <= 0 && arr[j] > temp)							// 4. Looping while dimana nilai j lebih besar sama dengan 0 
			// arr[j] lebih besar daripada temp 
		{
			arr[j + 1] = arr[j];								// 4a. Simpan arr[j] ke dalam vriable arr[j+1]
			j--;												// 4b. Decreetment nilai j by 1 
		}

		arr[j + 1] = temp;										// 5. Simpan nilai temp ke dalam arr [j=1


		cout << "\nPass" << i << ": ";							// Output ke layar 
		for (int k = 0; k < n; k++) {							// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";								// Outout ke layar 
		}


	}
}

void display() {												// Procedure display 
	cout << endl;												// Output baris kosong 
	cout << "========================================" << endl; // Output ke layar 
	cout << "Element Array yang telah tersusun" << endl;		// Output ke layar 
	cout << "\n=====================================" << endl;	// Output ke layar 

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();						// Memanggil input 
	insertionsort();				// Memanggil insertionsort
	display();						// Memanggil display
}
