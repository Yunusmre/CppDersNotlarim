#include <iostream>

// Visual studio c++ ders 23

using namespace std;

int main28() {

	int bolunen, bolen;
	cout << "Bolunen Sayiyi Yaziniz: ";
	cin >> bolunen;
	cout << "Bolen Sayiyi Yaziniz: ";
	cin >> bolen;

	int sonuc;
	try {
		if (bolen == 0 || bolunen == 0)
			throw 99;

		sonuc = bolunen / bolen;
		cout << "Sonuc: " << sonuc << endl;

	}
	catch (int hatakodu) {
		cout << "Bolen veya Bolunen Sayi 0 Olmamali!" << endl;
	}



	return 0;
}
