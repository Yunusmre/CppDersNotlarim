#include <iostream>

// Visual studio c++ ders 19

using namespace std;

int Hesapla(int x_) { // Pointer Kullanmadan 
	// Yo�un Hesaplamalar
	x_ = 34;
	return x_;
}

void Hesapla2(int* p) { // Pointer Kullanarak
	// Yo�un Hesaplamalar
	*p = 34;
}


int main22() {
	setlocale(LC_ALL, "Turkish");

	/* Pointer 
		> De�i�ken Adresinde eri�erek kullan�l�r
	*/

	int x = 7; // ismi x olan, de�eri 7 olan de�i�ken

	int* ptr; // ptr isminde pointer olu�turdum

	ptr = &x; // ptr pointir�na, x adresi atand� (& = adress of ...)

	cout << x << endl;			  // x de�i�ken de�erini yazd�r�r
	cout << *ptr << endl << endl; // pointer ile x de�i�keni de�erini yazd�r�r

	cout << ptr << endl; // ptr ile x'in memory adresinin yazd�r�r
	cout << &x << endl;  // &x ile x'in memory adresini yazd�r�r

	cout << endl << endl;

	x = Hesapla(x); // x verilerek de�i�tiriliyor
	cout << "H1; x'in Yeni De�eri: " << x << endl;

	Hesapla2(ptr); // pointer (memory adres) verilierek de�i�tiriliyor
	cout << "H2; x'in Yeni De�eri: " << x << endl;

	return 0;
}