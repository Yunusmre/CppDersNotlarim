#include <iostream>

// Visual studio c++ ders 19

using namespace std;

int Hesapla(int x_) { // Pointer Kullanmadan 
	// Yoðun Hesaplamalar
	x_ = 34;
	return x_;
}

void Hesapla2(int* p) { // Pointer Kullanarak
	// Yoðun Hesaplamalar
	*p = 34;
}


int main22() {
	setlocale(LC_ALL, "Turkish");

	/* Pointer 
		> Deðiþken Adresinde eriþerek kullanýlýr
	*/

	int x = 7; // ismi x olan, deðeri 7 olan deðiþken

	int* ptr; // ptr isminde pointer oluþturdum

	ptr = &x; // ptr pointirýna, x adresi atandý (& = adress of ...)

	cout << x << endl;			  // x deðiþken deðerini yazdýrýr
	cout << *ptr << endl << endl; // pointer ile x deðiþkeni deðerini yazdýrýr

	cout << ptr << endl; // ptr ile x'in memory adresinin yazdýrýr
	cout << &x << endl;  // &x ile x'in memory adresini yazdýrýr

	cout << endl << endl;

	x = Hesapla(x); // x verilerek deðiþtiriliyor
	cout << "H1; x'in Yeni Deðeri: " << x << endl;

	Hesapla2(ptr); // pointer (memory adres) verilierek deðiþtiriliyor
	cout << "H2; x'in Yeni Deðeri: " << x << endl;

	return 0;
}