#include <iostream>
#include <chrono> //Program�n Ne Kadar S�rede �al��t���n� �l�en K�t�phane

// ALGOR�TMA GEL��T�RME
//
// Kullan�c�dan tam say� de�eri al�n�z
//1'den kullan�c�n�n girdi�i say�ya kadar t�m asal say�lar� bulunuz

using namespace std;

int main00() {
	int sayi;

	cout << "Sayi Giriniz: ";
	cin >> sayi;

	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now(); //Sayac� �aal��t�r�yoruz

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

	chrono::steady_clock::time_point end = std::chrono::steady_clock::now(); //sayac� durduruyoruz

	std::cout << "Olculen Sure = "
		<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< "[�s]" << std::endl; //�l��len Saniyeyi Yazd�r�yoruz

	return 0;

}