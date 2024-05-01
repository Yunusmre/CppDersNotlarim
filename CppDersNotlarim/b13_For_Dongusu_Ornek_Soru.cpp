#include <iostream>

// Visual studio c++ Sýnav 2

using namespace std;
int main13() {

	//Kullanýcýnýn konsoldan girdiði sayýnýn faktöryelini hesaplayan bir c++ kodu yazýnýz.

	int sayi;

	cout << "Faktoriyelini Hesaplamak Istediginiz Sayiyi Giriniz: ";
	cin >> sayi;

	//3! = 3*2*1 = 6
	
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i;
	}

	cout << "Sayinin Faktoriyeli: " << sonuc << endl << endl;


	int sonuc1 = 1;
	for (int i = sayi; i > 0; i--) {
		sonuc1 *= i;
	}

	cout << "Sayinin Faktoriyeli: " << sonuc1 << endl;

	return 0;
}