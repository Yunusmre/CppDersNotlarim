#include <iostream>

// Visual studio c++ ders 2

using namespace std;

int main2() {

	int en, boy, alan; //Birden fazla deðiþken atarken virgül kullanýlabilir.

	//cin kullanýmý 1. Yöntem
	cout << "Lutfen Dikdortgenin Enini Giriniz: ";
	cin >> en; // Kullanýcýdan bilgi alýr ve en deðiþkenine atar.
	cout << endl;

	cout << "Lutfen Dikdortgenin Boyunu Giriniz: ";
	cin >> boy;
	cout << endl;

	//cin kullanýmý 2. Yöntem
	cout << "Lutfen Dikdortgenin Enini ve boyunu Giriniz: ";
	cin >> en >> boy; //Boþluk Veya Enter Kullanrak, Ayný anda 2 veri Giriþi Yapýlabilir.
	cout << endl;

	alan = en * boy;
	cout << "Lutfen Dikdortgenin Alani: " << alan << endl;
	cout << endl;

	return 0;
}