#include <iostream>

//Algoritma Sýnav Sorusu 2

using namespace std;

// Soru:
// 20 ile 40 arasýndaki sayýlarýn tüm bölenlerini bulan ve ekrana yazdýran bir program yazýnýz.

int main02() {
	setlocale(LC_ALL, "Turkish");

	for (int i = 20; i <= 40; i++) {
		cout << i << " Bölünenleri: ";
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << ", ";
			}
		}
		cout << endl;

	}

	return 0;
}
