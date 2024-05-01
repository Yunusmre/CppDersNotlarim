#include <iostream>

//Algoritma S�nav Sorusu 1

using namespace std;

// Soru:
// 4 basamakl� ve rakamlar� birbirinden farkl� ka� tane tam say�oldu�unu bulan ve ekrana yazd�ran c++ program�n� yaz�n�z.

int main01() {
	setlocale(LC_ALL, "Turkish");

	int sayac = 0;

	int birlerB, onlarB, yuzlerB, binlerB;

	for (int i = 1000; i < 10000; i++) {
		birlerB = i % 10;
		onlarB = (i / 10) % 10;
		yuzlerB = (i / 100) % 10;
		binlerB = (i / 1000);

		if (birlerB != onlarB && birlerB != yuzlerB && birlerB != binlerB &&
			onlarB != yuzlerB && onlarB != binlerB && yuzlerB != binlerB) {

			sayac += 1;
		}
	}

	cout << "1000-10000 aras�nda : " << sayac << " tane rakamlar� farkl� say� vard�r.";

	return 0;
}