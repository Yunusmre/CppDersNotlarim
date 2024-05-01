#include <iostream>

// Visual studio c++ ders 13

using namespace std;
int main16() {
	setlocale(LC_ALL, "Turkish");

	int sayi;
	cout << "Lütfen 1 ile 5 arasýnda bir sayý girniz: ";
	cin >> sayi;

	//switch'e veri girilir girilen veri case ile kontrol edilir. girilen veri'ye göre fonksiyon açlýþtýrýr
	//girilen veri yoksa veya yanlýþsa default çalýþýr

	switch (sayi) { 
		case 1:
			cout << "Seçiminiz 1" << endl;
			break;
		case 2:
			cout << "Seçiminiz 2" << endl;
			break;
		case 3:
			cout << "Seçiminiz 3" << endl;
			break;
		case 4:
			cout << "Seçiminiz 4" << endl;
			break;
		case 5:
			cout << "Seçiminiz 5" << endl;
			break;
		default:
			cout << "Hatalý sayý girdiniz!" << endl;

	}

	return 0;
}

