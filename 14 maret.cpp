#include <iostream>
using namespace std;

int arr[20];                                               // Membuat Array dengan panjang data 20
int n;                                                     // Membuat Variable inputan n

void input() {                          // procedure input
	while (true)
	{
		cout << "masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah inputan Array
		cin >> n;                                     // Memanggil variable inputan n

		if (n <= 20) {                                // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;                                     // Menggunakan perulangan for untuk menyimpan data pada array
	cout << "======================" endl;            // Membuat tampila susunan data element array
	cout << "Masukkan Element Array" endl;
	cout << "======================" endl;

	for (int i = 0; i < n; i++) {                     // Menggunakan perulangan for untuk menyimpan data pada array
		cout << "Data ke-" << (i + i) << "; ";        // Memasukkan atau menginputkan nilai data n
		cin >> arr[i];                                // Menyimpan nilai data n
	}
}
void insertionsort() {                                // prosedur insertionsort
	int temp;                                         // variabel data temporer atau penyimpan sementara
	int i, j;                                         // Membuat varibel j sebagai penanda
	for (i = 1; 1 <= n - 1; i++) {
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
			//arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];
			j--;
			void insertionsort({
				int
		}
		}
	}
}

