#include <iostream>

// Visual studio c++ ders 17

using namespace std;

void selamla() { //Selamla isminde Fonksiyon Olu�turuldu, parametre ayarlanmad�
	cout << "Merhaba!" << endl;
}

void selamla(string isim) { //Selamla isminde Fonksiyon Olu�turuldu, isim parametresi verildi
	cout << "Merhaba " << isim << endl;
}

int main20() {
	selamla(); //selamla isminde ilk fonksiyon �a�r�ld�
	selamla("Yunus Emre"); //selamla isminde fonksiyon �a�r�ld�, isim parametresi verildi�i i�in 2. fonksion �a�r�ld�

	return 0;
}