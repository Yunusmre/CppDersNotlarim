#include <iostream>

// Visual studio c++ Ornek Sorular

using namespace std;

int main27(){
	//Soru:
	//
	//Kullan�c�dan 4 tane tamsay� al�n ve bu tamsay�lar� kullan�c�n�n girid�i s�ran�n tam tersi �eklinde erkarana yazd�r�n.

	int alinanSayilar[4];

	for (int i = 0; i <= 3; i++) {
		cout << i << ". Sasyiyi Giriniz: ";
		cin >> alinanSayilar[i];
	}

	cout << endl;

	for (int k = 3; k >= 0; k--) {
		cout << alinanSayilar[k] << " ";
	}

	return 0;
}