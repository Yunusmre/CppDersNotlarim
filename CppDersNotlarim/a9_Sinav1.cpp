#include <iostream>

// Visual studio c++ Sýnav 1

using namespace std;
int main9() {

	// Kullanýcýdan 3 tane tam sayý alýnýz.
	// Bu 3 tamsayýnýn en büyügünü ekrana yazdýrýnýz.
	// Bunlarý yaparken en az sayýda kod yazarak yapmaya çalýþýnýz.

	int sayi1, sayi2, sayi3, sonuc;

	cout << "3 tane sayi giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;


	if (sayi1 >= sayi2 && sayi1 >= sayi3) {
		sonuc = sayi1;
	}
	else if (sayi2 >= sayi1 && sayi2 >= sayi3) {
		sonuc = sayi2;
	}
	else{
		sonuc = sayi3;
	}

	cout << "En Buyuk Sayi: " << sonuc << endl;

	return 0;
}