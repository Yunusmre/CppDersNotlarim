#include <iostream>

// Visual studio c++ ders 24

using namespace std;

void degistir(int& deger) { // Gönderilen Deðiþkenin Adresini alýr ve onun üstünde iþlme yapar. 
	deger = deger * 2;
	cout << "Deger: " << deger << endl;
}

int main29() {

	int sayi = 5;
	degistir(sayi);
	cout << "Sayi: " << sayi << endl;

	return 0;
}
