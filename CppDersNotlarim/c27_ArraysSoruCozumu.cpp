#include <iostream>

// Visual studio c++ Ornek Sorular

using namespace std;

int main27(){
	//Soru:
	//
	//Kullanýcýdan 4 tane tamsayý alýn ve bu tamsayýlarý kullanýcýnýn giridði sýranýn tam tersi þeklinde erkarana yazdýrýn.

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