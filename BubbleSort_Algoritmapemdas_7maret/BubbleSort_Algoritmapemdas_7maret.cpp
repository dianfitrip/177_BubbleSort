#include <iostream>
using namespace std;


int a[20];   //deklarasi array a dengan ukuran maks 20
int n;       //Deklarasi variable n untuk menyimpan banyaknya elemen pada array


void input() {		 // Procedure untuk input
	while (true) {   //looping
		cout << "Masukkan banyaknya elemen pada array : ";  // output ke layar
		cin >> n;		// input dari pengguna 
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		//kluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  // Output ke layar
		}

	}
	cout << endl;								// output ke layar
	cout << "====================" << endl;		// output ke layar
	cout << "Masukkan Elemen Array";			// output ke layar
	cout << "====================" << endl;		// output ke layar

	for (int i = 0; 1 < n; i++) {			// looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke -" << (i + 1) << ";";		//output ke layar
		cin >> a[i];		//input dari pengguna

	}

}
void display() {				//prosedur untuk menampilkan hasil
	cout << endl;				//output baris kosong
	cout << "====================" << endl;					//output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;		//output ke layar
	cout << "====================" << endl;					//output ke layar
	for (int j = 0; j < n; j++) {				//looping dengan j dimulai dari 0 hinghga n-1
		cout << "Data ke-" << j + 1 << ":";
		cout << a[j] << endl;					//output ke layar
	}
	cout << endl;								//output baris kosong
}

void bubbleSortArray() {			//Prosedur untuk mengurutkan Array dengan metode bubble sort
	int pass = 1;					//Step 1

	 for (pass; pass <= n - 1; pass + 1) {				//looping dengan i dimulai dari 1 hingga n-1
		 for (int j = 0; j <= n - 1 - pass; j++) {		//looping dengan 1 dimulai dari 0 hingga n-1
			 if (a[j] > a[j + 1]) {						//jika nilai pada a[j] lebih besar dari a[j+1]
				 int temp = a[j];						//simpan nilai a[j] ke variabel sementara temp
				 a[j] = a[j + 1];						//Assign nilai a[j+1] ke a[j]
				 a[j + 1] = temp;						//Assign nilai temp ke a[j+1]
			 }

		}

	}
}

