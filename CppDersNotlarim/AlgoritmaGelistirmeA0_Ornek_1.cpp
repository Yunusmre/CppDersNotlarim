#include <iostream>
#include <chrono> //Programýn Ne Kadar Sürede Çalýþtýðýný Ölçen Kütüphane

// ALGORÝTMA GELÝÞTÝRME
//
// Kullanýcýdan tam sayý deðeri alýnýz
//1'den kullanýcýnýn girdiði sayýya kadar tüm asal sayýlarý bulunuz

using namespace std;

int main00() {
	int sayi;

	cout << "Sayi Giriniz: ";
	cin >> sayi;

	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now(); //Sayacý Çaalýþtýrýyoruz

	for (int i = 1; i <= sayi; i++) {
		if (i == 1)
			continue;


		int bolunebilmeMiktari = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				bolunebilmeMiktari++;
			}
			if (bolunebilmeMiktari > 2)
				break;
		}

		if (bolunebilmeMiktari == 2) {
			cout << i << " ";
		}
	}
	cout << endl;

	chrono::steady_clock::time_point end = std::chrono::steady_clock::now(); //sayacý durduruyoruz

	std::cout << "Olculen Sure = "
		<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< "[µs]" << std::endl; //Ölçülen Saniyeyi Yazdýrýyoruz

	return 0;

}