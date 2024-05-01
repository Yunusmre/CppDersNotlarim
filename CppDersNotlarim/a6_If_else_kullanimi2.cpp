#include <iostream>

// Visual studio c++ ders 6

using namespace std;
int main6() {
	float sayi1, sayi2, sonuc;
	string islem;

	sonuc = NULL;

	cout << "Ilk Sayiyi Giriniz: ";
	cin >> sayi1;

	cout << "Ikinci Sayiyi Giriniz: ";
	cin >> sayi2;

	cout << "Islem Seciniz (+,-,*,/): ";
	cin >> islem;
	cout << endl;

	if (islem == "+") {
		sonuc = sayi1 + sayi2;
	}
	else if (islem == "-") {
		sonuc = sayi1 - sayi2;
	}
	else if (islem == "*") {
		sonuc = sayi1 * sayi2;
	}
	else if (islem == "/") {
		sonuc = sayi1 / sayi2;
	}
	else {
		cout << "Lutfen belirtilen islemlerden birini giriniz!" << endl;
	}

	if (sonuc != NULL) {
		cout << "Islemin Sonucu: " << sonuc;
	}

	return 0;
}