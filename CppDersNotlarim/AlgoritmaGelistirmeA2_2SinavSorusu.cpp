#include <iostream>

//Algoritma S�nav Sorusu 2

using namespace std;

// Soru:
// 20 ile 40 aras�ndaki say�lar�n t�m b�lenlerini bulan ve ekrana yazd�ran bir program yaz�n�z.

int main02() {
	setlocale(LC_ALL, "Turkish");

	for (int i = 20; i <= 40; i++) {
		cout << i << " B�l�nenleri: ";
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << ", ";
			}
		}
		cout << endl;

	}

	return 0;
}
