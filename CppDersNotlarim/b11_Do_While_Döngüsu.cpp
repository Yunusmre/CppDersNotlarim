#include <iostream>

// Visual studio c++ ders 10

using namespace std;
int main11() {

	string sifre = "1234";
	string girilenSifre;

	do { //ilk olarak kod bloðu çalýþýr, þart True ise çalýþmaya devam eder yoksa döngüden çýkar
		cout << "Lutfen Sifreyi Giriniz: ";
		cin >> girilenSifre;
	} while (girilenSifre != sifre);

	cout << "Sifre Dogru Giris Basarili! " << endl;

	return 0;
}
