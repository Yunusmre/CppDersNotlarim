#include <iostream>

// Visual studio c++ ders 17

using namespace std;

void selamla() { //Selamla isminde Fonksiyon Oluþturuldu, parametre ayarlanmadý
	cout << "Merhaba!" << endl;
}

void selamla(string isim) { //Selamla isminde Fonksiyon Oluþturuldu, isim parametresi verildi
	cout << "Merhaba " << isim << endl;
}

int main20() {
	selamla(); //selamla isminde ilk fonksiyon çaðrýldý
	selamla("Yunus Emre"); //selamla isminde fonksiyon çaðrýldý, isim parametresi verildiði için 2. fonksion çaðrýldý

	return 0;
}