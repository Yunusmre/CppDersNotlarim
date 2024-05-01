#include <iostream>

//Algoritma Sýnav Sorusu 1

using namespace std;

// Soru:
// 4 basamaklý ve rakamlarý birbirinden farklý kaç tane tam sayýolduðunu bulan ve ekrana yazdýran c++ programýný yazýnýz.

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

	cout << "1000-10000 arasýnda : " << sayac << " tane rakamlarý farklý sayý vardýr.";

	return 0;
}