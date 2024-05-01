#include <iostream>

// Visual studio c++ ders 16

using namespace std;


int alanHesapla(int x, int y) { // alanHesapla adýnda fonksiyon oluþturdum ve int olarak x ve y deðerlerini istedim
	int alan = x * y;

	return alan; // alan deðiþkenini döndürdüm.
}

void ekranaMesajYaz() { // deðer döndürmeyen fonksiyonlarda void kullanýlýr 
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
}

void yasGoster(int dogumyili) { // yasGoster fonsiyonu verilen deðeri 2024 yýlýndan çýkartýr ve yaþý bulur
	int yas = 2024 - dogumyili;

	cout << "Yasiniz: " << yas << endl;
}



int main19() {

	int sonuc = alanHesapla(2, 5); // alanHesapla fonksiyonunu çaðýrdým ve x = 2, y = 5 deðerini verdim ve sonuc deðerine aktardým
	cout << "Dikdortgen Alani: " << sonuc << endl;

	cout << endl << endl;

	ekranaMesajYaz(); // ekranaMesajYaz fonksiyonunu çaðýrýdm

	cout << endl << endl;

	yasGoster(2007); // yasGoster fonksiyonunu çaðýrýdm, dogumyili parametresine 2007 degerini verdim

	return 0;
}

