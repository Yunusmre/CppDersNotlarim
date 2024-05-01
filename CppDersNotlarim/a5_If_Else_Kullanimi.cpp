#include <iostream>

// Visual studio c++ ders 5

using namespace std;
int main5() {
	int sifre, girilenSifre;

	//Þifre Belirleme
	cout << "Lutfen Bir Sifre Belirleyiniz: ";
	cin >> sifre;
	cout << "Sifre Belirlendi!" << endl; 

	//Sifre Sorma
	cout << "Lutfen Sifreyi Giriniz: ";
	cin >> girilenSifre;
	cout << endl;

	if (girilenSifre == sifre) { //süslü parantez olmadanda kullanýlabilir
		cout << "sifre Dogru GiriS Basarili!" << endl;
	}
	else { // else if olarak kullanýlabilir ve != kullanýlabilir
		cout << "Girilen Sifre Yanlis!" << endl;
	}
	return 0;
}


