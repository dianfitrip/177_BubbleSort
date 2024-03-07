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

	for (int i = 0; < n; i++) {			// looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke -" << (i + 1) << ";";		//output ke layar
		cin >> a[i];		//input dari pengguna

	}


}




